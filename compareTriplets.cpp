#include <iostream>
#include <vector>
using namespace std;

vector<int> compareTriplets(const vector<int>& a, const vector<int>& b) {
    vector<int> score(2, 0); // score[0] = Alice, score[1] = Bob

    for (int i = 0; i < 3; i++) {
        if (a[i] > b[i]) {
            score[0]++;
        } else if (a[i] < b[i]) {
            score[1]++;
        }
    }

    return score;
}

int main() {
    vector<int> a(3), b(3);

    // Read Alice's triplet
    cin >> a[0] >> a[1] >> a[2];

    // Read Bob's triplet
    cin >> b[0] >> b[1] >> b[2];

    // Compare
    vector<int> result = compareTriplets(a, b);

    // Output result
    cout << result[0] << " " << result[1] << endl;

    return 0;
}
