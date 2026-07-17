#include<bits/stdc++.h>

using namespace std;

int main() {
    int n = 4;
    int count = 0;
    vector<int> arr(n);
    for (int i = 0; i < n; i ++) {
        cin >> arr[i];
    }

    unordered_map<int, int> f;
    for (int x: arr) {
        f[x]++;
    }

    for (auto it: f) {
        if (it.second > 1) {
            count += it.second-1;
        }
    }

    cout << count << endl;

    
    return 0;



}