#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <fstream>

double rand_double(double min, double max)
{
    return min + ((double)rand() / RAND_MAX) * (max - min);
}

int get_NUM(int argc, char *argv[]) {
    int n;
    for (int i = 1; i < argc; ++i) {
        n = atoi(argv[i]);
    }
    return n;
}

int main(int argc, char *argv[])
{
    int n = atoi(argv[1]);
    std::cout << n << std::endl;
    for (int i = 0; i < n; ++i)
    {
        std::cout << rand_double(-M_PI, M_PI) << " "
        << rand_double(-M_PI, M_PI) << " "
        << rand_double(-M_PI, M_PI) << std::endl;
    }
}
