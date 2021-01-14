#include <iostream>
#include <algorithm>

using namespace std;

bool CanWin(int a, int b) {
    if (a < b) {
        swap(a, b);
    }
    // a >= b

    int d = a - b;
    if (d) {
        if (b >= d) {
            b -= d;
            a = b;
        } else {
            return false;
        }
    }

    if (a % 3) {
        return false;
    }

    return true;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int a, b;
        cin >> a >> b;
        cout << (CanWin(a, b) ? "YES" : "NO") << endl;
    }
}