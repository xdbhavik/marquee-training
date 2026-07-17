#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    vector<int> arr(n);
    for (int i = 0; i < n; i ++) {
        cin >> arr[i];
    }

    int m = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > arr[m]) m = i;
        
    }

    while (m != 0) {
        swap(arr[m], arr[m-1]);
        m--;
        count++;
    }

    m = n-1;
    for (int i = n-1; i >= 0; i --) {
        if (arr[i] < arr[m]) m =  i;
        
    }

    while (m != n-1) {
        swap(arr[m], arr[m+1]);
        m++;
        count++;
    }

    cout << count << endl;
    return 0;



}