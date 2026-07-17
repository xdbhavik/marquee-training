#include<bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    (n%2) ? cout << n/2 << endl: cout << n/2-1 << endl;
    
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}