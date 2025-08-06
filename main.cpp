#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isValidIdentifier(const string& input) {
    if (input.empty()) return false;

    if (!isalpha(input[0]) && input[0] != '_') {
        return false;
    }

    for (size_t i = 1; i < input.length(); ++i) {
        if (!isalnum(input[i]) && input[i] != '_') {
            return false;
        }
    }

    return true;
}

int main() {
    string input;

    cout << "Enter an identifier to check: ";
    cin >> input;

    if (isValidIdentifier(input)) {
        cout << "Result: Valid Identifier" << endl;
    } else {
        cout << "Result: Not a Valid Identifier" << endl;
    }

    return 0;
}

//1
/*
#include <iostream>
#include <cstring>
using namespace std;

bool isInteger(const char* str) {
    for (int i = 0; str[i]; i++) {
        if (str[i] == ' ') continue; // skip spaces
        if (str[i] < '0' || str[i] > '9') return false;
    }
    return true;
}

bool isReal(const char* str) {
    bool hasDecimal = false;

    for (int i = 0; str[i]; i++) {
        if (str[i] == ' ') continue; // skip spaces

        if (str[i] == '.') {
            if (hasDecimal) return false; // multiple dots
            hasDecimal = true;
        } else if (str[i] < '0' || str[i] > '9') {
            return false; // non-digit character
        }
    }

    return hasDecimal;
}

int main() {
    char input[100];

    cout << "Enter input: ";
    cin.getline(input, 100); // Accept spaces

    if (isInteger(input)) {
        cout << "Your Input Was an Integer Numeric Constant" << endl;
    } else if (isReal(input)) {
        cout << "Your Input Was a Real Numeric Constant" << endl;
    } else {
        cout << "Your Input Was Not Numerical" << endl;
    }

    return 0;
}
*/
