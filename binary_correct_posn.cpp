//Search Insert Position :-

// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
// You must write an algorithm with O(log n) runtime complexity


#include <bits/stdc++.h>
using namespace std;
int searchInsert(int arr[], int n, int target) {
    int start = 0, end = n - 1;
    int ans = n;

    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target) {
            ans = mid;
            break;
        }
        else if (arr[mid] < target) {
            start = mid + 1;
        }
        else {
            ans = mid;
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
    int arr[] = {1, 3, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 5;
    cout << "Insert position: " << searchInsert(arr, n, target) << endl;
    return 0;
}