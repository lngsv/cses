#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    unsigned long long res = 0;
    int prev;
    cin >> prev;
    for (int i = 1; i < n; ++i) {
        int a;
        cin >> a;
        if (a < prev) {
            res += prev - a;
        } else {
            prev = a;
        }
    }

    cout << res << endl;
}