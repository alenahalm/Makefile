#define _USE_MATH_DEFINES
#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {
    ifstream file("out.txt");
    for(int i = 0; i < 12; i++) {
        double x, y, z;
        file >> x >> y >> z;
        double angle = 2 * sin(x) * cos(y) + cos(z);
        cout << angle * (180/M_PI) << endl;
    }

}