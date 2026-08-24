#include<bits/stdc++.h>

using namespace std;

int solve(vector<int> &v, int &k) {
    int count = 0;
    int kthScore = v[k - 1];

    for (int x : v) {
        if (x >= kthScore && x > 0) count++;
    }
    return count;
}

int main() {
    int n, k; 
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i ++) {
        cin >> v[i];
    }
    cout << solve(v, k) << endl;
}

