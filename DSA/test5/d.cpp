#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<char>> v(n, vector<char>(m));
    char presDesk;
    cin >> presDesk;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }
    unordered_set<char> deps;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (v[i][j] == presDesk) {
                if (i != 0 && v[i - 1][j] != presDesk && v[i - 1][j] != '.') {
                    deps.insert(v[i - 1][j]);
                }
                if (i != n - 1 && v[i + 1][j] != presDesk && v[i + 1][j] != '.') {
                    deps.insert(v[i + 1][j]);
                }
                if (j != 0 && v[i][j - 1] != presDesk && v[i][j - 1] != '.') {
                    deps.insert(v[i][j - 1]);
                }
                if (j != m - 1 && v[i][j + 1] != presDesk && v[i][j + 1] != '.') {
                    deps.insert(v[i][j + 1]);
                }
            }
        }
    }
cout << deps.size() << endl;
return 0;
}