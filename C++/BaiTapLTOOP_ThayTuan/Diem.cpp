#include <bits/stdc++.h>
#define n 5
using namespace std;

class Diem{
	private:
		int a[n];
	public:
		void nhap();
		void xuat();
		friend float KhoangCach(Diem d, Diem d2);		
};

void Diem::nhap(){

	cout << "Nhap toa do diem: " << endl;
	for (int i=0;i<n;i++){
		cin >> a[i];
	}
}

void Diem::xuat(){
	cout << "Cac diem trong toa do la: " << endl;
	for (int i=0;i<n;i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

float KhoangCach(Diem d, Diem d2){
	float kc=0;
	for (int i=0;i < n;i++){
		kc += pow(d2.a[i]-d.a[i],2);
	}
	return sqrt(kc);
}

int main(){
	Diem d1, d2;
	cout << "Nhap toa do diem 1: " << endl;
	d1.nhap();
	d1.xuat();

	cout << "Nhap toa do diem 2: " << endl;
	d2.nhap();
	d2.xuat();

	float khoangCach = KhoangCach(d1, d2);
	cout << "Khoang cach giua hai diem la: " << khoangCach << endl;

	return 0;
}