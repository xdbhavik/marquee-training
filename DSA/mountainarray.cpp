#include<bits/stdc++.h>

using namespace std;


int findAnsOnLeftArray(vector<int> arr, int l, int r, int target) {
    if (l > r) return -1;
    int mid = l + (r-l)/2;
    if (arr[mid] == target) return mid;
    else if (arr[mid] > target) return findAnsOnLeftArray(arr, l, mid-1, target);
    else if (arr[mid] < target) return findAnsOnLeftArray(arr, mid + 1, r, target);
    return -1;

}

int findAnsOnRightArray(vector<int> arr, int l, int r, int target) {
    if (l > r) return -1;
    int mid = l + (r-l)/2;
    if (arr[mid] == target) return mid;
    else if (arr[mid] > target) return findAnsOnRightArray(arr, mid + 1, r, target);
    else if (arr[mid] < target) return findAnsOnRightArray(arr, l, mid-1, target);
    return -1;
}

int findPeak (vector<int> arr, int l, int r) {
    
    int mid = -1;
    while (l < r) {
        mid = l + (r - l)/2;
        if (arr[mid] < arr[mid + 1]) l = mid + 1;
        else r = mid;
    }
    return mid;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements of array: " << endl;
    for (int i = 0; i < n; i ++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter target: ";
    cin >> target;

    int peak = findPeak(arr, 0, n-1);

    //search on left subarray
    int left = findAnsOnLeftArray(arr, 0, peak-1, target);
    if (left != -1) {
        cout << "Element found on index: " << left << endl;
        return 0;
    }
    int right = findAnsOnRightArray(arr, peak+1, n-1, target);
    if (right != -1) {
        cout << "Element found on index: " << right << endl;
        return 0;
    }

    cout << "Element not found!";
    return 0;

}