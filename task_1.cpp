#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string input;

    cout << "Enter a string: ";
    getline(std::cin, input);

    reverse(input.begin(), input.end());

    cout << "Reversed string: " << input << std::endl;

    return 0;
}
