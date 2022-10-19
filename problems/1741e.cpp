#include <iostream>
#include <vector>

using namespace std;

string solve() {
    int n;
    cin >> n;
    vector<int> seq(n+1);
    for (int i = 1; i <= n; i++) {
        int b;
        cin >> b;
        seq[i] = b;
    }
    vector<bool> dp(n+1, false);
    dp[0] = true;
    int i;
    for (i = 1; i < seq.size(); i++) {
        if (i + seq[i] <= seq.size() && dp[i-1]) dp[i + seq[i]] = true;
        if (i - seq[i] - 1 >= 0 && dp[i - seq[i] - 1]) dp[i] = true; 
    }
    return dp[n] ? "YES" : "NO";
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cout << solve() << endl;
    }
}