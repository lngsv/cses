#include <iostream>
#include <string>
#include <array>

using namespace std;

int main() {
    string s;
    cin >> s;
    array<int, 26> a;
    a.fill(0);
    for (char c : s) {
        ++a[c - 'A'];
    }
    string res;
    res.reserve(s.size());
    pair<char, int> odd;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] % 2) {
            if (odd.first) {
                cout << "NO SOLUTION" << endl;
                return 0;
            }
            odd.first = i + 'A';
            odd.second = a[i];
        }
    }

    for (int i = 0; i < a.size(); ++i) {
        if (i + 'A' != odd.first) {
            for (int j = 0; j < a[i] / 2; ++j) {
                cout << char(i + 'A');
            }
        }
    }
    for (int j = 0; j < odd.second; ++j) {
        cout << odd.first;
    }
    for (int i = a.size(); i > 0; --i) {
        if (i - 1 + 'A' != odd.first) {
            for (int j = 0; j < a[i - 1] / 2; ++j) {
                cout << char(i - 1 + 'A');
            }
        }
    }
    cout << endl;
}