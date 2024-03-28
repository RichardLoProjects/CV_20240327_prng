#include "xorshift_prng.h"

Xorshift64::Xorshift64(unsigned long long seed = 1ULL): state(seed)
{
    if (state==0) //the state is expected to be a nonzero ULL
    {
        state += 1ULL;
    }
}

unsigned long long Xorshift64::generate()
{
    state ^= state >> 12;
    state ^= state << 25;
    state ^= state >> 27;
    return state;
}

double Xorshift64::generate_double()
{
    return static_cast<double>(generate()) / static_cast<double>(-1ULL);
}