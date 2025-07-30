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
