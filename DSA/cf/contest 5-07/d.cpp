#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> nums(m);

    for (int i = 0; i < m; i++)
        cin >> nums[i];

    sort(nums.begin(), nums.end());
    int ans = INT_MAX;

    for (int i = 0; i <= m - n; i++) {
    int diff = nums[i + n - 1] - nums[i];
    if (diff < ans) {
        ans = diff;
    }
}

    cout << ans;
}