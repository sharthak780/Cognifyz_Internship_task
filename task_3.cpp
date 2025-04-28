#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    int a = 0, b = 1, c;
    for (int i = 0; i < n; i++) {
        if (i == 0)
            cout << a << " ";
        else if (i == 1)
            cout << b << " ";
        else {
            c = a + b;
            cout << c << " ";
            a = b;
            b = c;
        }
    }

    cout << endl;
    return 0;
}
