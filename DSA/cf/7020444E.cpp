#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i ++) {
        cin >> a[i];
    }
    int sum = 0;
    for (int x: a) {
        sum += x;
    }
    if (sum % n != 0) {cout << -1 << endl; return;}

    int avg = sum / n;

    int ans = 0;
    for (int x: a) {
        if (x > avg) ans++;
    }

    cout << ans << endl;
    
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}