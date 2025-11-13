// Given an array of integers and an integer k, count how many pairs of elements in the array sum up to k.
#include <iostream>
using namespace std;

int main() {
    int n, k;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[100]; 
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter target sum: ";
    cin >> k;
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == k) {
                count++;
            }
        }
    }
    cout << "Number of pairs with sum " << k << " = " << count << endl;

    return 0;
}
