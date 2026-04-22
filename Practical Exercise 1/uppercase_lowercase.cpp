#include <iostream>
#include <cctype>
using namespace std;

// checks whether character is uppercase, lowercase, or neither
void checkCase(char letter) {
    if (isupper(letter)) {
        cout << "'" << letter << "' is an UPPERCASE letter." << endl;
    } else if (islower(letter)) {
        cout << "'" << letter << "' is a lowercase letter." << endl;
    } else {
        cout << "'" << letter << "' is neither uppercase nor lowercase (not a letter)." << endl;
    }
}

int main() {
    char character;

    // ask user to enter character
    cout << "Enter a character: ";
    cin >> character;

    // pass character to function for checking
    checkCase(character);

    return 0;
}
