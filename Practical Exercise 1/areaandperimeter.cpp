#include <iostream>
using namespace std;

// returns area of square
double getArea(double side) {
    return side * side;
}

// returns perimeter of square
double getPerimeter(double side) {
    return 4 * side;
}

int main() {
    double side;

    // ask user for side length
    cout << "Enter the side length of the square: ";
    cin >> side;

    // call functions and display results
    cout << "Area      = " << getArea(side) << endl;
    cout << "Perimeter = " << getPerimeter(side) << endl;

    return 0;
}
