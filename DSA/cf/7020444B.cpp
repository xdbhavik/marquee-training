#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
int even = 0, odd = 0;
    for (int i = 0; i < n; i ++) {
        cin >> a[i];
        if (i % 2 == 0 && a[i] % 2 == 1)
 even++;
        if (i % 2 == 1 && a[i] % 2 == 0)
 odd++;
    }

    if (even != odd) cout << -1 << endl;
    else cout << even << endl;
    return;

    
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}