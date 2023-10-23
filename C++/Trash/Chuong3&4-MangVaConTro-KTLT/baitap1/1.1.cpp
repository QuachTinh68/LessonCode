#include <bits/stdc++.h>
using namespace std;
void NhapdaySo(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap day so thu " << i+1 << ": ";
        cin >> a[i];
    }
}
int TinhTong(int a[], int n) {
    int Tong = 0;
    for (int i = 0; i < n; i++) {
        Tong += a[i];
    }
    return Tong;
}
int TinhTich(int a[], int n) {
    int Tich = 1;
    for (int i = 0; i < n; i++) {
        Tich *= a[i];
    }
    return Tich;
}
int DemSoChiaHetCho3VaLonHon10(int a[], int n) {
    int Dem = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 3 == 0 && a[i] > 10) {
            Dem++;
        }
    }
    return Dem;
}
int DemSoNamTrongDoan100Den1000(int a[], int n) {
    int Dem = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= 100 && a[i] <= 1000) {
            Dem++;
        }
    }
    return Dem;
}
int main() {
    int n;
    cout << "Nhap so phan tu cua day: ";
    cin >> n;
    int a[n];
    NhapdaySo(n, a);
    
    int Tong = TinhTong(a, n);
    int Tich = TinhTich(a, n);
    int SoChiaHetCho3VaLonHon10 = DemSoChiaHetCho3VaLonHon10(a, n);
    int SoNamTrongDoan100Den1000 = DemSoNamTrongDoan100Den1000(a, n);

    cout << "Tong cua day la: " << Tong << endl;
    cout << "Tich cua day la: " << Tich << endl;
    cout << "So cac so chia het cho 3 va lon hon 10 la: " << SoChiaHetCho3VaLonHon10 << endl;
    cout << "So cac so nam trong doan tu 100 den 1000 la: " << SoNamTrongDoan100Den1000 << endl;

    return 0;
}
