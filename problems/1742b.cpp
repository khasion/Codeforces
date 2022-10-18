#include <iostream>
#include <vector>
#include <set>

std::string solve(std::vector<int> v) {
    std::set<int> bucket;
    for (int i = 0; i < v.size(); i++) {
        if (bucket.count(v[i])) return "NO";
        bucket.insert(v[i]);
    }
    return "YES";
}

int main() {
    int t, n;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        std::cin >> n;
        std::vector<int> v;
        for (int j = 0 ; j < n; j++) {
            int c;
            std::cin >> c;
            v.push_back(c);
        }
        std::cout << solve(v) << std::endl;
    }
    return 0;
}