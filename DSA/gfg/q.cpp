#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int countTripletsLessThanL(int n, int L, int arr[]) {
    sort(arr, arr+n);
     int diff= 0;
     int count = 0;
    for (int i = 0; i < n; i ++) {
        for (int j = i + 1; j < n; j ++) {
            for (int k = j + 1; k < n; k ++) {
                diff = arr[k] - arr[i];
                
                if (diff <= L) count++;
                if (diff > L) break;
            }
                            if (diff > L) break;

        }
    }
    return count;
}

int main()
{
    int arr[] = { 1, 2, 3, 4 };

    int n = sizeof(arr) / sizeof(arr[0]);
    int L = 3;
    int ans = countTripletsLessThanL(n, L, arr);
    cout << "Total Number of ways = " << ans << "\n";
    return 0;
}