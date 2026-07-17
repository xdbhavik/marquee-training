#include<bits/stdc++.h>

using namespace std;

void solve() {
    vector<int> arr(4);

    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
    }

    vector<int> copy = arr;
    sort(copy.begin(), copy.end());

    int mx = copy[3];
    
    int smax = copy[2];
    int maxIndex, smaxIndex;

    for (int i = 0; i < 4; i++) {
        if (arr[i] == mx)
            maxIndex = i;
        if (arr[i] == smax)
            smaxIndex = i;
            
            
    }

    if ((maxIndex < 2 && smaxIndex >= 2) || (maxIndex >= 2 && smaxIndex < 2))
        cout << "YES\n";
    else
        cout << "NO\n";
        
        
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}