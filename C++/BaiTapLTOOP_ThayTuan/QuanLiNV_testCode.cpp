#include <bits/stdc++.h>
using namespace std;

class Nhanvien
{
	private:
		string manv, hoten;
		int sdt;
	public:
		Nhanvien(){
			manv=hoten=" ";
			sdt=0;
		}
		string get_manv(){
			return manv;
		}
		string get_hoten(){
			return hoten;
		}
		int get_sdt(){
			return sdt;
		}
		void nhap();
		void in();
};

void Nhanvien::nhap(){
	cout << "\nNhap ma nhan vien: ";
	getline(cin, manv);
	cout << "\nNhap ho ten nhan vien: ";
	getline(cin, hoten);
	cout << "\nNhap so dien thoai: ";
	cin >> sdt;
	cin.ignore();
}
void Nhanvien::in(){
	cout << "\n\n----------------------------------";
	cout << "\nMa nhan vien la: " << manv << endl;
	cout << "Ho ten nhan vien: " << hoten << endl;
	cout << "So dien thoai: " << sdt << endl;
	cout << "\n\n----------------------------------";
}

class Quanli{
	private:
		Nhanvien nv[100];
		int n;
	public:
		void nhapds();
		void inds();
		void sapXep();
		Nhanvien timKiem();
};

void Quanli::nhapds(){
	cout << "\nNhap so luong nhan vien: "; cin >> n;
	cin.ignore();
	for (int i=0;i<n;i++){
		cout <<"\nNhap thong tin sinh vien thu " << i+1 << ":" << endl;
		nv[i].nhap();
	}
}
void Quanli::inds(){
	for(int i=0;i<n;i++){
		nv[i].in();
	}
}

void Hoanvi(Nhanvien &a, Nhanvien &b){
	Nhanvien tmp;
	tmp=a;
	a=b;
	b=tmp;
}

void Quanli::sapXep(){
	for (int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if (nv[i].get_hoten() > nv[j].get_hoten())
				Hoanvi(nv[i],nv[j]);
		}
	}
}

Nhanvien Quanli::timKiem(){
	string ma;
	cout << "\nNhap ma nhan vien can tim kiem: " ;
	getline(cin,ma);
	for (int i=0;i<n;i++){
		if (nv[i].get_manv()==ma){
			nv[i].in();
		}
	}
}

int main(){
	Quanli ob;
	ob.nhapds();
	ob.inds();
	ob.sapXep();
	cout <<"\nMa nhan vien sau khi sap xep la: " << endl;
	ob.inds();
	ob.timKiem();
	return 0;
}