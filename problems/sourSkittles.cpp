// For the problem https://codeforces.com/gym/103968/problem/B
#include <iostream>
#include <vector>

using namespace std;

vector<int> bucketsort(vector<int> arr) {
    vector<int> bucket(51, 0);
    for (int i = 0; i < arr.size(); i++) {
        bucket[arr[i]] += 1;
    }
    int index = 0;
    vector<int> sorted;
    for (int i = 0; i < bucket.size(); i++) {
        while(bucket[i] > 0) {
            sorted.push_back(i);
            bucket[i]--;
        }
    }
    return sorted;
}

int solve(int thresh) {
    int k;
    string c;
    vector<int> arr;
    cin >> k;
    while(getline(cin, c, ' ')) {
        int num = stoi(c);
        arr.push_back(num);
    }
    arr = bucketsort(arr);
    int S = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] >= thresh && k > 0) {
            S += arr[i];
            k--;
        }
    }
    return S;
}

int main() {
    int thresh;
    cin >> thresh;
    cout << solve(thresh) << endl;
}
