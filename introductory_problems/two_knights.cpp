#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    unsigned long long res = 6;
    for (unsigned long long i = 1; i <= n; ++i) {
        if (i == 1) {
            cout << 0 << endl;
        } else if (i == 2) {
            cout << 6 << endl;
        } else {
            res += (2 * i - 1) * (i - 1) * (i - 1); // old - new
            //cout << i << ": old + old-new = " << res << endl;
            res += (2 * i - 1) * (2 * i - 2) / 2; // new - new
            //cout << i << ": old + old-new + new-new = " << res << endl;
            res -= 2; // corner
            res -= 2; // new-new beating
            for (int h = 1; h < i; ++h) {
                if (h - 2 > 0 && i - 1 > 0) {
                    res -= 2;
                }
                if (h - 1 > 0 && i - 2 > 0) {
                    res -= 2;
                }
                if (h + 1 < i && i - 2 > 0) {
                    res -= 2;
                }
                if (h + 2 < i && i - 1 > 0) {
                    res -= 2;
                }
            }
            cout << res << endl;
        }
    }
}