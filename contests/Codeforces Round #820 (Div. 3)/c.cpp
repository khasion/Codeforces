#include <iostream>
#include <vector>
#include <list>
#include <set>


typedef long long int ll;

using namespace std;

int cost(char c1, char c2) {
    return abs((c1-96) - (c2-96));
}

void solve(string s) {
    list<int> q;
    vector<int> pred(s.size(), 0);
    vector<bool> visited(s.size(), 0);
    vector<int> dist1(s.size(), 0);
    vector<int> dist2(s.size(), 0);

    q.push_back(0);
    visited[0] = true;

    while(!q.empty()) {
        int u = q.front();
        q.pop_front();
        for (int i = 0; i < s.size(); i++) {
            if (visited[i] == false) {
                visited[i] = true;
                dist1[i] = dist1[u] + cost(s[u], s[i]);
                dist2[i] = dist2[u] + 1;
                pred[i] = u;
                q.push_back(i);
            }
        }
    }
    cout << dist1[s.size()-1] << " " << dist2[s.size()-1] << endl;
}

int main () {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;
        solve(s);
    }
    return 0;
}