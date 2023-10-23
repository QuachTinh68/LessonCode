#include <bits/stdc++.h>
using namespace std;

struct SinhVien{
	string msv ,hoten, lop;
	float diemTB;

};

void NhapDs(SinhVien a[],int n){
	for (int i=0;i<n;i++){
		cin.ignore();
		cout << "Nhap thong tin sinh vien thu: "<<i+1 << endl;
		cout <<"Nhap ma sinh vien: " ;
		cin >> a[i].msv;
		cin.ignore();
		cout << "Nhap ho ten sinh vien: ";
		getline(cin, a[i].hoten);
		cout << "Nhap lop: ";
		cin >> a[i].lop;
		cout <<"Nhap diem trung binh: ";
		cin >> a[i].diemTB;
	}
}
void in(SinhVien *a, int n){
	for (int i=0;i<n;i++){
		cout << a[i].msv << "\t"<<a[i].hoten <<"\t"<< a[i].lop << "\t"<<a[i].diemTB << endl;
	}
}

void HoanVi(SinhVien &a, SinhVien &b){
	SinhVien temp;
	temp=a;
	a=b;
	b=temp;
}
 void SapXep(SinhVien *a, int n){
 	for (int i=0;i<n-1;i++){
 		for (int j=i+1;j<n;j++){
 			if (a[i].diemTB	< a[j].diemTB){
 				HoanVi(a[i],a[j]);
			 }
		 }
	 }
 }

int main(){
	SinhVien *a;
	int n; cout <<"Nhap so thi sinh: "; cin>> n;
	a= new SinhVien[n];
	if (a == NULL){
		cout << "\n Loi cap phat bo nho. ";
		exit(1);
	}
	NhapDs(a,n);
	SapXep(a,n);
	cout << "Danh sanh sau khi sap xep: " <<endl;
	in(a,n);
	delete a;
}
