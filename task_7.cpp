#include <iostream>
using namespace std;

int main() {
    int numSubjects;
    cout << "Enter the number of subjects: ";
    cin >> numSubjects;

    double grades[100], sum = 0;

    for (int i = 0; i < numSubjects; i++) {
        cout << "Enter grade for subject " << i + 1 << ": ";
        cin >> grades[i];
        sum += grades[i];
    }

    double average = sum / numSubjects;
    cout << "Average grade: " << average << endl;

    return 0;
}
