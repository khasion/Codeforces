// For the problem https://codeforces.com/gym/103968/problem/A
#include <iostream>

typedef long long int ll;

ll solve(std::string n) {
    ll candles = 0;
    for (int i = 0; i < n.size(); i++) {
        if (n[i] == '1') candles++;
    }
    return candles;
}

int main() {
    std::string n;
    std::cin >> n;
    std::cout << solve(n) << std::endl;
    return 0;
}