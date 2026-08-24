#include<bits/stdc++.h>

using namespace std;

string solve(vector<string> &v) {
    unordered_map<string, int> m;
    for (string s: v) {
        m[s]++;
    }
    string ans = "";
    int ma = INT_MIN;
    for (auto it: m) {
        if (it.second > ma) {
            ma = it.second;
            ans = it.first;
        }
    }
    return ans;
}

int main() {
    int n; 
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i ++) {
        cin >> v[i];
    }
    cout << solve(v);
}

