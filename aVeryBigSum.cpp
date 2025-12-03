#include <iostream>
#include <vector>
using namespace std;

long aVeryBigSum(const vector<long>& ar) {
    long sum = 0;
    for (long x : ar) {
        sum += x;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;

    vector<long> ar(n);

    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    long result = aVeryBigSum(ar);

    cout << result << endl;

    return 0;
}
