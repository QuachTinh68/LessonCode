#include <bits/stdc++.h>
using namespace std;

class Sinhvien{
	private:
		string hoten, masv, ngaysinh,lop;
		float diem;
	public:
		Sinhvien(){
			hoten=masv=ngaysinh=lop=" ";
			float diem=0.0;
		};
		Sinhvien(string hoten,  string ngaysinh, string lop,float diem){
			this->hoten=hoten;
			this->ngaysinh=ngaysinh;
			this->lop=lop;
			this->diem=diem;
		};
		friend void nhap(Sinhvien&);
		friend void in(Sinhvien a);
};

void nhap(Sinhvien &a){
	a.masv="B20DCCN001"; 
	getline(cin, a.hoten);
	getline(cin,a.ngaysinh);
	getline(cin, a.lop);
	cin>> a.diem;
	if (a.ngaysinh[2]!='/') a.ngaysinh="0"+a.ngaysinh;
	if (a.ngaysinh[5]!='/') a.ngaysinh.insert(3,"0");
	
}

void in(Sinhvien a){
	cout << a.masv <<" "<< a.hoten <<" "<< a.lop <<" " << a.ngaysinh <<" " << fixed << setprecision(2) << a.diem;
}

int main(){
	Sinhvien a;
	nhap(a);
	in(a);     
}