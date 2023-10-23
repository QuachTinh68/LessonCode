#include <bits/stdc++.h>
using namespace std;
struct Sinhvien{
	string maSV;
	string hoten;
	float diemTB;
};
void nhap(Sinhvien sv[], int n){
	for (int i=0;i<n;i++){
		cout<<" Nhap sinh vien "<< i+1<< endl;
		cout << "Nhap ma sinh vien: ";
		getline(cin, sv[i].maSV);
		cout << "Nhap ho ten: ";
		getline(cin, sv[i].hoten);
		cout << "Nhap diem tb: ";
		cin>> sv[i].diemTB;
		cin.ignore();		
	}		
}
void sapxep(Sinhvien sv[], int n){
	Sinhvien tmp;
	for (int i=0;i<n;i++){
		for (int j=i+1; j<n;j++){
			if (sv[i].diemTB<sv[j].diemTB){
				tmp=sv[i];
				sv[i]=sv[j];
				sv[j]=tmp;
			}
		}
	}	
}
void xuat(Sinhvien sv[], int n){
	for (int i=0; i<n;i++){
		cout<<sv[i].maSV<< "/t"<<sv[i].hoten<<"/t"<<sv[i].diemTB<<endl;
}
int main (){
	int n; cin >>n;
	cin.ignore();
	Sinhvien a[100];
	nhap(a, n);
	sapxep(a, n);
	xuat(a,n);
}