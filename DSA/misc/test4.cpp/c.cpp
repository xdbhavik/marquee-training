
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, h = "hello";
    cin >> s;

    int j = 0;

    for (char ch : s) {
        if (j < 5)if(ch == h[j]) {
            j++;
        }
    }

    if (j == 5) cout << "YES\n";
    else cout << "NO\n";
}