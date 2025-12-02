#include <iostream>
using namespace std;

int main() {
    const int WORKERS = 3;
    double hours[WORKERS] = {0};
    double salary[WORKERS] = {0};
    const double PAY = 10.0;

    for (int i = 0; i < WORKERS; i++) {
        cout << "Enter hours worked for worker " << i + 1 << ": ";
        cin >> hours[i];
    }

    for (int i = 0; i < WORKERS; i++) {
        if (hours[i] <= 40) {
            salary[i] = hours[i] * PAY;
        } else {
            salary[i] = (40 * PAY) + (hours[i] - 40) * PAY * 1.5;
        }
    }

    cout << "..." << endl;
    cout << "Worker\tHours\tSalary" << endl;

    for (int i = 0; i < WORKERS; i++) {
        cout << i + 1 << "\t" << hours[i] << "\t" << salary[i] << endl;
    }

    return 0;
}
