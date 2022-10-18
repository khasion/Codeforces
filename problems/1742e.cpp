#include <iostream>
#include <vector>
#include <utility>

typedef long long int ll;

int binary_search(std::vector<std::pair<ll, ll>> hs, ll q) {
    int lo = 0;
    int hi = hs.size()-1;
    int last_smaller = -1;
    while (lo <= hi) {
        int mid = (lo + hi)/2;
        if (hs[mid].first > q) hi = mid-1;
        if (hs[mid].first <= q) {lo = mid+1; last_smaller = mid;}
    }
    return last_smaller;
}

void solve(std::vector<std::pair<ll, ll>> hs, std::vector<ll> qs) {
    for (int i = 0; i < qs.size(); i++) {
        int index = binary_search(hs, qs[i]);
        if (index < 0) std::cout << 0 << " ";
        else std::cout << hs[index].second << " ";
    }
    std::cout << std::endl;
}

int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int nh = 0, nq = 0;
        std::vector<std::pair<ll, ll>> hs;
        std::cin >> nh;
        std::cin >> nq;

        ll h;
        std::cin >> h;
        hs.push_back(std::make_pair(h, h));
        for (int j = 1; j < nh; j++) {
            ll h;
            std::cin >> h;
            hs.push_back(
                std::make_pair(
                    std::max(h, hs[j-1].first),
                    h + hs[j-1].second
                )
            );
        }
        std::vector<ll> qs;
        for (int j = 0; j < nq; j++) {
            ll q;
            std::cin >> q;
            qs.push_back(q);
        }
        solve(hs, qs);
    }
    return 0;
}