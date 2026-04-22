#include <iostream>
using namespace std;

int main() {
    long long days;

    // ask user for number of days
    cout << "Enter the number of days: ";
    cin >> days;

    // convert days to seconds
    long long seconds = days * 24 * 60 * 60;

    // display result
    cout << days << " day(s) = " << seconds << " second(s)" << endl;

    return 0;
}
