#include <bits/stdc++.h>
using namespace std;
void NhapdaySo(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
void DemSoChanChiaBa(int a[], int n) {
    int DemChan[0];
    for (int i = 0; i < n; i++) {
        if (a[i] % 3 == 0 && a[i] % 2==0) {
            cin >>DemChan[i];
        }
	}
}
void DemSoLeChiaBa(int a[], int n) {
    int DemLe[0];
    for (int i = 0; i < n; i++) {
        if (a[i] % 3 == 0 && a[i] % 2==0) {
            cin >>DemLe[i];
        }
	}
}
void Dem(int a[], int n) {
    int Dem[0];
    for (int i = 0; i < n; i++) {
        if (a[i] % 3 != 0) {
           cin>> Dem[i];
        }
	}
}
int main(){
	int n; cout << "Nhap so phan tu cua day: ";
	cin >> n;
	int a[n];
	NhapdaySo(n, a);
	int Chan=DemSoChanChiaBa(a,n);
	int Le=DemSoLeChiaBa(a,n);
	int Count=Dem(a,n);
	cout << "So Chan Chia Het Cho Ba La: " << Chan << endl;
	cout << "So Khong Chia Het Cho Ba La: " << Count<< endl;
	cout << "So Le Chia Het Cho Ba La: " << Le<< endl;

	
}