#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius;

    // ask user for radius
    cout << "Enter the radius of the sphere: ";
    cin >> radius;

    // compute r^3 using built-in pow function
    double rCubed = pow(radius, 3);

    // apply volume formula: V = (4/3) * pi * r^3
    double volume = (4.0 / 3.0) * M_PI * rCubed;

    // display result
    cout << "Volume of sphere with radius " << radius
         << " = " << volume << endl;

    return 0;
}
