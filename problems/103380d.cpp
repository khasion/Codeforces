#include <iostream>
#include <vector>
#include <list>
#include <limits.h>

using namespace std;

typedef struct {
    int dest;
    int cost;
}Path;

void bfs(vector<int> houses, vector<vector<Path>> paths, int n) {
    list<int> q;
    vector<bool> visited(n+1, false);
    vector<int> dist(n+1, 0);

    visited[0] = true;
    dist[0] = 0;
    q.push_back(0);

    while(!q.empty()) {
        int u = q.front();
        q.pop_front();
        for (int i = 0; i < paths[u].size(); i++) {
            int dest = paths[u][i].dest;
            int cost = paths[u][i].cost;
            if (!visited[dest]) {
                visited[dest] = true;
                dist[dest] = dist[u] + cost;
                q.push_back(dest);
            }
        }
    }
    int total = 0;
    int longest = -1;
    for (int i = 0; i < dist.size(); i++) {
        for (int j = 0; j < houses.size(); j++) {
            if (i == houses[j]) {
                total += dist[i];
                if (dist[i] > longest) longest = dist[i];
            }
        }
    }
    cout << total << " " << longest << endl;
}

void solve(int n, int k, int m) {
    vector<int> houses;
    vector<vector<Path>> paths(n+1, vector<Path>());
    for (int i = 0; i < k; i++) {
        int x;
        cin >> x;
        houses.push_back(x);
    }
    for (int i = 0; i < m; i++) {
        int mu, mv, mc;
        Path p1, p2;
        cin >> mu >> mv >> mc;
        p1.dest = mv; p1.cost = mc;
        p2.dest = mu; p2.cost = mc;
        paths[mu].push_back(p1);
        paths[mv].push_back(p2);
    }
    bfs(houses, paths, n);
}

int main() {
    int n, k, m;
    cin >> n >> k >> m;
    solve(n, k, m);
    return 0;
}