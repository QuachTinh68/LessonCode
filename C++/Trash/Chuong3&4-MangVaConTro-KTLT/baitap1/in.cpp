#include <iostream>
using namespace std;

int findUnique(int arr[], int n) {
    int res = arr[0];
    for (int i = 1; i < n; i++) {
        res ^= arr[i];
    }
    return res;
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The unique element is: " << findUnique(arr, n);
    return 0;
}
