#include <iostream>
#include <vector>

typedef long long int ll;

void compare(bool sother, bool tother, int slength, int tlength) {
    if (tother) std::cout << "YES" << std::endl;
    else if (!sother && slength < tlength) std::cout << "YES" << std::endl;
    else std::cout << "NO" << std::endl;
}

void solve() {
    int n;

    ll slength = 1;
    ll tlength = 1;
    bool sother = false;
    bool tother = false;

    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int mode, k;
        std::string x;
        std::cin >> mode;
        std::cin >> k;
        std::cin >> x;
        for (int b = 0; b < x.size(); b++) {
            if (mode == 1) {
                if (x[b] != 'a') sother = true;
                else slength += k;
            }
            else {
                if (x[b] != 'a') tother = true;
                else tlength += k;
            }
        }
        compare(sother, tother, slength, tlength);
    }
}

int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        solve();
    }
    return 0;
}