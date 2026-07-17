#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t; //no. of test cases
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int x;
        cin >> x;

        int arr[n];
        for (int i = 0; i < n; i ++) {
            cin >> arr[i];
        }

        //logic
        vector<int> indices;

        for (int i = 1; i <= n; i ++) {
            if (i+x > n && i-x < 1) {
                indices.push_back(i-1); //(fixing indices that cant be moved)
            }
        }

        //clone array
        int temp[n];
        for (int i = 0; i < n; i ++) {
            temp[i] = arr[i];
        }
        sort(temp, temp+n);

        bool canSwap = true;

        for (int i = 0; i < indices.size(); i ++) {
            if (arr[indices[i]] != temp[indices[i]]) {
                canSwap = false;
                break;
            }
        }
        
        canSwap? cout << "YES\n" : cout << "NO\ns";
        
        
        
    }
    return 0;
}