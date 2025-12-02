#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int SCORES = 120;
    int theScores[SCORES];
    int arraySize = 0;

    int userInput;
    int sum = 0;
    double average;

    cout << "Enter the first score or -999 to end input: ";
    cin >> userInput;

    while (true) {
        if (userInput == -999) {
            break;
        }

        if (userInput < 0 || userInput > 150) {
            cout << "Error, " << userInput << " is not a valid score." << endl;
            cout << "Valid scores are in the range 0 through 150 inclusive." << endl;
        } else {
            if (arraySize < SCORES) {
                theScores[arraySize++] = userInput;
            } else {
                cout << "Array is full! Ending input." << endl;
                break;
            }
        }

        cout << "Enter the next score or -999 to end input: ";
        cin >> userInput;
    }

    cout << endl;

    if (arraySize == 0) {
        cout << "No valid scores were entered." << endl;
        return 0;
    }

    for (int i = 0; i < arraySize; i++) {
        sum += theScores[i];
    }

    average = static_cast<double>(sum) / arraySize;

    cout << fixed << setprecision(1);
    cout << "The average of the scores is: " << average << "." << endl;

    if (arraySize >= 2) {
        cout << "The scores below the average were: ";
        for (int i = 0; i < arraySize; i++) {
            if (theScores[i] < average) {
                cout << theScores[i] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
