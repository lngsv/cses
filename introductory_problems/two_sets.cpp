#include <iostream>
#include <vector>

using namespace std;

int main() {
    unsigned long long n;
    cin >> n;
    if (n * (n + 1) / 2 % 2) {
        cout << "NO" << endl;
    } else {
        vector<unsigned long long> first, second;
        unsigned long long half = n * (n + 1) / 4;
        for (unsigned long long i = n; i > 0; --i) {
            if (i <= half) {
                half -= i;
                first.push_back(i);
            } else {
                second.push_back(i);
            }
        }
        cout << "YES" << endl;
        cout << first.size() << endl;
        for (auto x : first) {
            cout << x << " ";
        }
        cout << endl << second.size() << endl;
        for (auto x : second) {
            cout << x << " ";
        }
        cout << endl;
    }
}