#include<bits/stdc++.h>

using namespace std;

int findBitonicPoint(int arr[], int n, int l, int r) {
    if (l > r) return -1;
    int bitonic = 0;
    int mid;
    mid = (l + r)/2;

    if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid-1]) {
        return mid;
    } else if (arr[mid] > arr[mid + 1] && arr[mid] < arr[mid - 1]) {
        bitonic = findBitonicPoint(arr, n, l, mid-1);
    } else if (arr[mid] < arr[mid + 1] && arr[mid] > arr[mid - 1]) {
        bitonic = findBitonicPoint(arr, n, mid+1, r);
    }
    return bitonic;
}

int ascendingBinarySearch(int arr[], int l, int r, int key) {
    if (l > r) return -1;
    int mid;
    mid = l + (r-l) / 2;
    int index = -1;
    if (arr[mid] == key) return mid;
    else if (arr[mid] > key) {
        index = ascendingBinarySearch(arr, l, mid-1, key);
    } else if (arr[mid] < key) {
        index = ascendingBinarySearch(arr, mid + 1, r, key);
    }
    return index;
}

int descendingBinarySearch(int arr[], int l, int r, int key) {
    if (l > r) return -1;
    int mid = l + (r-l)/2;
    int index = -1;
    if (arr[mid] == key) return mid;
    else if (arr[mid] > key) {
        index = descendingBinarySearch(arr, mid+1, r, key);
    } else if (arr[mid] < key) {
        index = descendingBinarySearch(arr, l, mid-1, key);
    }
    return index;
}

int searchBitonic(int arr[], int n, int key, int index) {
    if (key > arr[index]) {
        return -1;
    } else if (key == arr[index]) {
        return index;
    } else { 
        //  condition -> (key < arr[index])
        int temp = ascendingBinarySearch(arr, 0, index-1, key);
        
        if (temp != -1) {
            return temp;
        } else return descendingBinarySearch(arr, index+1, n-1, key);
    }
    
}

int main() {
    int arr[] = { -8, 1, 2, 3, 4, 5, -2, -3 };
    int key = 1;
    int n, l, r;
    n = sizeof(arr) / sizeof(arr[0]);
    l = 0;
    r = n - 1;
    int index;
    index = findBitonicPoint(arr, n, l, r);

    int x = searchBitonic(arr, n, key, index);
    
    if (x == -1) {
        cout << "Element not found" << endl;

    } else {
        cout << "Element found at index : " << x << endl;
    }
    return 0;

}
