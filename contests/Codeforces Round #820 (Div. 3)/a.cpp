#include <iostream>
#include <vector>

typedef long long int ll;

using namespace std;

int solve(int a, int b, int c) {
    int dist1 = abs(1 - a);
    int dist2 = abs(b - c) + abs(1 - c);

    if (dist1 == dist2) return 3;
    return dist1 < dist2 ? 1 : 2; 
}

int main () {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << solve(a, b, c) << endl;
    }
    return 0;
}