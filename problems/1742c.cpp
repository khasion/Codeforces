#include <iostream>
#include <vector>
#include <set>

bool check_red(std::set<int> reds, std::vector<std::string> lines) {
    if (reds.empty()) return false;

    for (auto it=reds.begin(); it != reds.end(); ++it) {
        bool ok = true;
        for (int j = 0; j < 8; j++) {
            if (lines[*it][j] != 'R') {ok = false; break;}
        }
        if (ok) return true;
    }
    return false;
}

std::string solve(std::vector<std::string> lines) {
    std::set<int> blues;
    std::set<int> reds;
    for (int i = 0; i < lines.size(); i++) {
        for (int j = 0; j < lines[i].size(); j++) {
            if (lines[i][j] == 'B') blues.insert(j);
            if (lines[i][j] == 'R') {reds.insert(i);}
        }
    }
    if (check_red(reds, lines)) return "R";
    return "B";
}

int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::string line;
        std::vector<std::string> v;
        for (int j = 0; j < 8; j++) {
            std::cin >> line;
            v.push_back(line);
        }
        std::cout << solve(v) << std::endl;
    }
    return 0; 
}