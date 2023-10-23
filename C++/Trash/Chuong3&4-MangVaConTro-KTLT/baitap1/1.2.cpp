#include <bits/stdc++.h>
using namespace std;
void NhapdaySo(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap day so thu " << i+1 << ": ";
        cin >> a[i];
    }
}
int TimSoChanNhoNhat(int a[], int n) {
    int min = a[0]; 
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0 && a[i] < min) {
            min = a[i];
        }
    }
    return min;
}
int main(){
	int n;
	cout << "Nhap so luong phan tu: "; cin >> n;
	int a[n];
	NhapdaySo(n,a);
	int min=TimSoChanNhoNhat(a, n);
	cout <<"Phan tu chan nho nhat la: " << min;
	return 0;
}