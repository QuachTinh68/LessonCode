#include <bits/stdc++.h>
using namespace std;

struct SinhVien {
	string masv;
	string hoten;
	string tenLop;
	string ngaysinh;
	float gpa;

	void Nhap() {
		cout <<"Nhap ma sinh vien: ";
		cin >> masv;
		cout << "Nhap ho ten: ";
		cin.ignore();
		getline(cin, hoten);
		cout << "Nhap ten lop: ";
		cin >> tenLop;
		cout << "Nhap ngay sinh: ";
		cin >> ngaysinh;
		cout << "Nhap diem gpa: ";
		cin >> gpa;
	}
	void in() {
		cout <<"-------------------------------------"<< endl;;
		cout << "Ma sinh vien: " << masv << endl;
		cout << "Ho ten sinh vien: " << hoten << endl;
		cout << "Ten lop: " << tenLop << endl;
		cout << "GPA: " <<fixed <<setprecision(2) << gpa << endl;
	}
};
void nhapds(SinhVien a[], int n){
	for (int i=0;i<n;i++){
		cout << "Nhap thong tin sinh vien thu: "<< i+1 << endl;
		a[i].Nhap();
	}
}

 void inds(SinhVien a[], int n){
 	cout << " Thong tin danh sach sinh vien:\n ";
 	for (int i=0;i<n;i++){
 		cout << "Sinh vien thu: "<< i+1 << endl;
 		a[i].in();
	 }
 }

void timkiem(SinhVien a[], int n){
	string ma;
	cout << "Nhap ma sinh vien can tim: "; cin >> ma;
	for (int i=0;i<n;i++){
		if (ma == a[i].masv){
			a[i].in();
			return;
		}
	}
	cout <<"Khong tim thay ma.";
}

int main() {
	cout << "Nhap so luong sinh vien: ";
	int n; cin >> n;
	SinhVien a[n];
	nhapds(a, n);
	inds(a, n);
	timkiem(a,n);
	return 0;
}