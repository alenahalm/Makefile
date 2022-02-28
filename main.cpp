#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <fstream>

double rand_double(double min, double max)
{
    return min + ((double)rand() / RAND_MAX) * (max - min);
}


int main(int argc, char *argv[])
{
    int n = 12;
    std::ofstream f("out.txt");
    for (int i = 0; i < n; ++i)
    {
        f << rand_double(-M_PI, M_PI) << " "
        << rand_double(-M_PI, M_PI) << " "
        << rand_double(-M_PI, M_PI) << std::endl;
    }
    f.close();
}