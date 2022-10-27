#include <iostream>
#include <vector>
#include <string>

typedef long long int ll;

using namespace std;

bool multidigit(string s, int i) {
    if (i+2 < s.size() && s[i+2] == '0' && !(i+3 < s.size() && s[i+3] == '0')) return true;
    return false;
}

string solve(string s, int l) {
    string ans = "";
    for (int i = 0; i < l; i++) {
        if (multidigit(s, i)) {
            int n = stoi(s.substr(i, 2));
            char c = n + 96;
            //cout << n << " : " << c << " : " << s.substr(i, 2) << endl;
            ans += c;
            i += 2;
        }
        else {
            char c = (s[i]-'0') + 96;
            ans += c;
        }
    }
    return ans;
}

int main () {
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int l;
        string s;
        cin >> l;
        cin >> s;
        cout << solve(s, l) << endl;
    }
    return 0;
}