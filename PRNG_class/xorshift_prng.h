#pragma once

class Xorshift64
{
private:
    unsigned long long state;
public:
    explicit Xorshift64(unsigned long long); //Construct instance
    unsigned long long generate(); // Generate a random 64-bit integer
    double generate_double(); // Generate a random double in the range (0, 1)
};