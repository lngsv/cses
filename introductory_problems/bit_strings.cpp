#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    constexpr unsigned MOD = 1'000'000'007;
    unsigned result = 1;
    for (int i = 0; i < n; ++i) {
        result <<= 1;
        result %= MOD;
    }
    cout << result << endl;
}