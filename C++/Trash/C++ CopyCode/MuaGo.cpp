#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned int n;
    cin >> n; 
    for(int dem = 0; dem < n; dem++) {
        unsigned long long arr[7];
        for(int i = 0; i < 7; i++) {
            cin >> arr[i];
        }
        for(int i = 0; i < 6; i++) {
            for(int j = i+1; j < 7; j++) {
                if(arr[i] > arr[j]) {
                    long long temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        cout << arr[0] << " " << arr[1] << " " << arr[6] - arr[0] - arr[1] << endl;
    }
    return 0;
}
 
