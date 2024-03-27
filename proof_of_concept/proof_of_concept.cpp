#include<iostream>

class Xorshift64
{
private:
    unsigned long long state;
public:
    explicit Xorshift64(unsigned long long seed = 2147000000ULL) : state(seed) {}
    unsigned long long generate() // Generate a random 64-bit integer
    {
        state ^= state >> 12;
        state ^= state << 25;
        state ^= state >> 27;
        return state;
    }
    double generate_double() // Generate a random double in the range [0, 1)
    {
        return static_cast<double>(generate()) / static_cast<double>(-1ULL);
    }
};

int main()
{
    // Generate and print some random numbers
    int seed;
    std::cin >> seed;
    Xorshift64 xorshift(static_cast<unsigned long long>(seed));
    const int num_random_numbers = 50;
    for (int i=0; i<num_random_numbers; ++i) {
        std::cout << xorshift.generate_double();
        std::cout << "\n";
    }
    std::cin.get();
    std::cin.get();
    return 0;
}