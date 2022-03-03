#define _USE_MATH_DEFINES
#include <iostream>
#include <fstream>
#include <cmath>

int main() {
    std::ifstream file("out.txt");
    int n;
    file >> n;
    for(int i = 0; i < n; i++) {
        double x, y, z;
        file >> x >> y >> z;
        double angle = 2 * sin(x) * cos(y) + cos(z);
        std::cout << angle * (180/M_PI) << std::endl;
    }
    file.close();
}
