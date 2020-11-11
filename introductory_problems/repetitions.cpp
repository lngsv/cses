#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    char last = s[0];
    int cur = 1, res = 1;
    for (int i = 1; i < s.size(); ++i) {
        if (s[i] == last) {
            ++cur;
        } else {
            last = s[i];
            if (cur > res) {
                res = cur;
            }
            cur = 1;
        }
    }
    if (cur > res) {
        res = cur;
    }
    cout << res << endl;
}