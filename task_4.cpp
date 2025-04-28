#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secret = rand() % 100 + 1;
    int guess;

    cout << "Guess the number (between 1 and 100): ";

    while (true) {
        cin >> guess;

        if (guess == secret) {
            cout << "Congratulations! You guessed the number." << endl;
            break;
        } else if (guess < secret) {
            cout << "Guess is Lower, try again: ";
        } else {
            cout << "Guess is higher, try again: ";
        }
    }

    return 0;
}
