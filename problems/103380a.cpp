#include <iostream>

using namespace std;

string solve() {
    int n;
    cin >> n;
    while (n != 0) {
        int digit = n % 10;
        n /= 10;
        if (digit % 2 == 0) return "SAD";
    }
    return "HAPPY";
}

int main() {
    cout << solve() << endl;
    return 0;
}