#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int solve(int n) {
    vector<vector<int>> v(n, vector<int>(n, 0));
    vector<int> cols(n, 0);
    vector<int> rows(n, 0);
    vector<pair<int,int>> bucket(n*n+1, make_pair(-1, -1));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int num;
            cin >> num;
            v[i][j] = num;
            bucket[num].first = i;
            bucket[num].second = j;
        }
    }
    string ch;
    vector<int> order;
    while(getline(cin, ch, ' ')) {
        int x = stoi(ch);
        order.push_back(x);
    }
    for (int i = 0; i < order.size(); i++) {
        int r = bucket[order[i]].first;
        int c = bucket[order[i]].second;
        if (r != -1 && c != -1) {
            cols[c]++;
            rows[r]++;
            if (cols[c] == n || rows[r] == n) return order[i];
        }
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    cout << solve(n) << endl;
}