#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string input, cleaned, reversed;

    cout << "Enter a word or phrase: ";
    getline(cin, input);

    for (char c : input) {
        if (isalnum(c))
            cleaned += tolower(c);
    }

    reversed = cleaned;
    reverse(reversed.begin(), reversed.end());

    if (cleaned == reversed)
        cout << "It is a palindrome." << endl;
    else
        cout << "It is not a palindrome." << endl;

    return 0;
}
