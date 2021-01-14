#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int result = 0;
    while (n >= 5) {
        result += n /= 5;
    }
    cout << result << endl;
}