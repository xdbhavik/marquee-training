#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int kth = v[k -1];
    int res = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] >= kth && v[i] > 0) {
            res++;
        }
    }

    cout << res << endl;
    return 0;
}