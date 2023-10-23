#include <iostream>
using namespace std;

const int MAX = 100;

void sapXep(int a[], int n) {
    int i;
    int chanChia3[MAX], leChia3[MAX], khacChia3[MAX];
    int nChanChia3 = 0, nLeChia3 = 0, nKhacChia3 = 0;
    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0 && a[i] % 3 == 0) {
            chanChia3[nChanChia3] = a[i];
            nChanChia3++;
        } else if (a[i] % 2 != 0 && a[i] % 3 == 0) {
            leChia3[nLeChia3] = a[i];
            nLeChia3++;
        } else {
            khacChia3[nKhacChia3] = a[i];
            nKhacChia3++;
        }
    }
    cout << "Mang chia het cho 3 va la so chan: ";
    for (i = 0; i < nChanChia3; i++) {
        cout << chanChia3[i] << " ";
    }
    cout << endl;
    
    cout << "Mang chia het cho 3 va la so le: ";
    for (i = 0; i < nLeChia3; i++) {
        cout << leChia3[i] << " ";
    }
    cout << endl;

    cout << "Mang khong chia het cho 3: ";
    for (i = 0; i < nKhacChia3; i++) {
        cout << khacChia3[i] << " ";
    }
    cout << endl;
}
int main() {
    int a[MAX];
    int n, i;
    cout << "Nhap so phan tu: ";
    cin >> n;
    cout << "Nhap cac phan tu cua mang: ";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    sapXep(a, n);
    return 0;
}

