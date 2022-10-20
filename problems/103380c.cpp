#include <iostream>
#include <vector>

using namespace std;

typedef long long int ll;

ll solve(int n) {
    vector<ll> v;
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    ll damage = 0;
    for (int i = 1; i < n; i++) {
        damage += abs(v[i-1] - v[i]);
    }
    return damage;
}

int main() {
    int n;
    cin >> n;
    cout << solve(n) << endl;
    return 0;
}