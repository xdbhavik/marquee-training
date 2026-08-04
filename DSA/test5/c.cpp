#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    int me = 0;
    int i = 0;
    while (m != 0 && i < n && v[i] < 0) {
        me += (-1 * v[i]);
        i++;
        m--;
    }

    cout << me << endl;
    return 0;
}