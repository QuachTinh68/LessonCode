#include <bits/stdc++.h>
using namespace std;

class Sinhvien{
	private:
		string ma, hoten, lop, email;
	public:
		void nhap();
		void xuat();
		string get_ma(){
			return ma;
		}
		string get_ten(){
			return hoten;
		}
		string get_lop(){
			return lop;
		}
		string get_email(){
			return email;
		}
};

void Sinhvien::nhap(){
	cout << "Nhap ma sinh vien: ";
	getline(cin, ma);
	cout << "Nhap ho ten sinh vien: " ;
	getline(cin,hoten);
	cout << "Nhap lop: "; getline(cin,lop);
	cout << "Nhap email: "; getline(cin,email);
}

void Sinhvien::xuat(){
	cout << ma  <<" " << hoten << " "<< lop << " " << email << endl;
}

class Quanli{
	private:
		Sinhvien sv[1000];
		int n;
	public:
		void nhapds();
		void xuatds();
		void SapXep();
		void truyVan(int Q);
};

void Quanli::nhapds(){
	cout << "Nhap so luong sinh vien: " << endl;
	cin >> n; 
	cin.ignore() ;
	for (int i=0;i<n;i++){
		cout << "Nhap thong tin sinh vien thu " << i+1 << endl;
		sv[i].nhap();
	}
}

void Quanli::xuatds(){
	for (int i=0;i<n;i++){
		sv[i].xuat();
	}
}

void Hoanvi(Sinhvien &a, Sinhvien &b){
	Sinhvien temp;
	temp=a;
	a=b;
	b=temp;
}
void Quanli::SapXep(){
	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			if (sv[i].get_lop() > sv[j].get_lop()){
				Hoanvi(sv[i],sv[j]);							 
			}else if (sv[i].get_lop() == sv[j].get_lop()){
				if (sv[i].get_ma() > sv[j].get_ma()){
					Hoanvi(sv[i],sv[j]);
				}
			}
		}  
	}
}

void Quanli::truyVan(int Q){
	while(Q--){
		string s; cin >>s;
		cout << "Danh sach sinh vien lop: " << s << endl;
		for (Sinhvien x : sv){
			if (x.get_lop() == s){
				x.xuat();
			}
		}
	}
}

int main(){
	Quanli ob;
	ob.nhapds();
	ob.xuatds();
	ob.SapXep();
	cout << "Danh sach sau khi xap xep la" << endl;
	ob.xuatds();
	int Q;
	cout << "Nhap so luong lop can truy van: " << endl;
	cin >> Q;cin.ignore();
	ob.truyVan(Q);
}