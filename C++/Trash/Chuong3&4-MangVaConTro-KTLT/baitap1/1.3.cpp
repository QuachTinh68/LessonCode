#include <iostream>
using namespace std;
void NhapdaySo(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap day so thu " << i+1 << ": ";
        cin >> arr[i];
    }
}
int demboba(int arr[], int n) {
    int dem = 0;
    for (int i = 1; i < n-1; i++) {
        if (arr[i] == (arr[i-1] + arr[i+1]) / 2) {
            dem++;
        }
    }
    return dem;
}
int main() {
    cout << "Nhap so luong phan tu cua day so: ";
	int n; cin >> n;
    int arr[n];
    NhapdaySo(n, arr);
    int dem = demboba(arr, n);
    cout << "So luong bo 3 so thoa man dieu kien la: " << dem;
    return 0;
}
