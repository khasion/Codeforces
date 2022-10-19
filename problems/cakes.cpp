// For the problem https://codeforces.com/gym/103968/problem/C
#include <iostream>
#include <vector>

using namespace std;

int solve() {
    int days;
    string c;
    cin >> days;
    vector<int> ings;
    while (getline(cin, c, ' ')) {
        int x = stoi(c);
        ings.push_back(x);
    }
    vector<int> bucket(6, 0);
    for (int i = 0; i < ings.size(); i++) {
        bucket[ings[i]]++;
    }
    int cakes = bucket[5];
    for (int i = 4; i > 0; i--) {
        if (bucket[i] < cakes) cakes = bucket[i];
    }
    return cakes;
}

int main() {
    cout << solve() << endl;
    return 0;
}