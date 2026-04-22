#include <iostream>
using namespace std;

int main() {
    // initialise x and y as per the pseudocode
    double x = 0;
    double y = 20;

    // repeat until y is less than 6
    do {
        y = y - 4;
        x = x + (2.0 / y);
    } while (y >= 6);

    // display final value of x
    cout << "x = " << x << endl;

    return 0;
}
