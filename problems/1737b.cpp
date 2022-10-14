#include <iostream>
#include <vector>
#include <utility>
#include <limits.h>
#include <cmath>

typedef long long ll;

ll calc_sqrt(ll x) {
    ll left = 0, right = 2000000123;
    while (left < right) {
        ll mid = (left + right)/2;
        if (mid*mid > x) right = mid;
        else left = mid + 1;
    }
    return left - 1;
}

void execute(ll start, ll end) {
    ll left = calc_sqrt(start);
    ll right = calc_sqrt(end);
    ll ans;
    if (left == right) {
        ans = 0;
        for (int i = 0; i < 3; i++) {
            if (start <= left*(left+i) && left*(left+i) <= end)  ans++;
        }
    }
    else {
        ans = (right-left-1)*3;
        for (int i = 0; i < 3; i++) {
            if (start <= left*(left+i)) ans++;
            if (right*(right+i) <= end) ans++;
        }
    }
    std::cout << ans << std::endl;
}


int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        ll start, end;
        std::cin >> start;
        std::cin >> end;
        execute(start, end);
    }
    return 0;
}