#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    unsigned long long sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    for (int i = 0; i < n - 1; ++i) {
        int a;
        cin >> a;
        sum -= a;
    }
    cout << sum << endl;
}