#include <iostream>
using namespace std;

int main() {
    const int length = 5;
    double values[length];
    double sum = 0.0;

    // ask user to enter 5 values
    cout << "Enter " << length << " values:" << endl;

    // store each value in array and accumulate sum
    for (int i = 0; i < length; i++) {
        cout << "  Value " << (i + 1) << ": ";
        cin >> values[i];
        sum += values[i];
    }

    // calculate and display average
    double average = sum / length;
    cout << "Average of the " << length << " values = " << average << endl;

    return 0;
}
