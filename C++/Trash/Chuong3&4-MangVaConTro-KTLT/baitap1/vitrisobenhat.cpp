#include <iostream>
using namespace std;
int main() {
	int n, a[100], min, i;
	cout << "Nhap so phan tu n: ";
	cin >> n;
	cout << "Nhap cac phan tu cua day: ";
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	min = a[0];
	for (i = 1; i < n; i++) {
		if (a[i] < min) {
			min = a[i];
		}
	}
	cout << "So be nhat trong day la: " << min << endl;
	cout << "Vi tri cac so bang so be nhat la: ";
	for (i = 0; i < n; i++) {
		if (a[i] == min) {
			cout << i << " ";
		}
	}
	return 0;
}
