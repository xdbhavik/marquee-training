#include <bits/stdc++.h>

using namespace std;

int canBuy(int x, vector<int>& m)
{
    int l = 0, r = m.size() - 1;
    int count = 0;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (m[mid] <= x)
        {
            count = mid + 1;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    vector<int> x(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
sort(x.begin(), x.end());
    int q;
    cin >> q;

    vector<int> m(q);
    for (int i = 0; i < q; i++)
    {
        cin >> m[i];
    }

    vector<int> res(q);
    for (int i = 0; i < q; i++) {
        res[i] = canBuy(m[i], x);
    }
    for (int i = 0; i < q; i++) {
        cout << res[i] << endl;
    }
    return 0;
}