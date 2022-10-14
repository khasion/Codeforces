#include <iostream>

int main() {
    int x, ans = 0;
    std::cin >> x;
    if (x > 0) ans = x/5;
    if (x % 5 != 0) ans += 1;
    std::cout << ans << std::endl;
    return 0;
}