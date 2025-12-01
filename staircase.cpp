#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void staircase(int n) {
    for (int i = 1; i <= n; i++) {
        // print spaces
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        // print #
        for (int k = 0; k < i; k++) {
            cout << "#";
        }
        cout << endl;
    }
}

// simple trim-left
string ltrim(const string &str) {
    string s = str;
    s.erase(s.begin(), find_if(s.begin(), s.end(),
        [](unsigned char c){ return !isspace(c); }));
    return s;
}

// simple trim-right
string rtrim(const string &str) {
    string s = str;
    s.erase(find_if(s.rbegin(), s.rend(),
        [](unsigned char c){ return !isspace(c); }).base(), s.end());
    return s;
}

int main() {
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    staircase(n);

    return 0;
}