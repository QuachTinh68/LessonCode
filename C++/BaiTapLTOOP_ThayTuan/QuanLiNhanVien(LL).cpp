#include <bits/stdc++.h>
using namespace std;

class Nhanvien{
	private:
		string *manv;
		string *hoten;
		int sdt;
	public:
		Nhanvien *next;
		Nhanvien(string *manv, string *hoten, int sdt){
			manv = new string(manv);
			hoten = new string(hoten);
			sdt = sdt;
		}
		string get_manv(){
			return this->manv;
		}
		string get_hoten(){
			return this->hoten;
		}
		int get_sdt(){
			return this->sdt;
		}
		void Get(string *maNV, string *hoTen, int soDT){
			manv = new string(maNV);
			hoten= new string(hoTen);
			sdt=soDT;
		}
};

class Quanli{
	private:
		Nhanvien *first;
	public:
		Quanli(){
			first = NULL;
		}
		void nhap();
		void xuat();
		void sapxep();
		Nhanvien timkiem(string *manv);
	
};

void Quanli::nhap(){
	string mnv, ten;
	int so;
	do{
		cout << "\nNhap ma nhan vien: ";
		getline(cin,mnv);
		if (mnv != " "){
			cout << "\n Nhap ten nhan vien: ";
			getline(cin,ten);
			cout << "\nNhap so dien thoai: ";
			cin >> so;
			cin.ignore();
			Nhanvien *tam=new Nhanvien(mnv,ten,so);
			tam->next = first;
			fisrt = tam;
		}
	}while(mnv != " ");
}

void Quanli::xuat(){
	Nhanvien * p = first;
	while (p!=NULL){
		cout << "\n\n----------------------------------";
		cout << "\nMa nhan vien: " << p->get_manv();
		cout << "\nTen hoc phan: " << p->get_hoten();
		cout << "\nSo dien thoai: " << p->get_sdt();
		cout << "\n\n----------------------------------";
		p=p->next;
	}
}
void Quanli::sapxep(){
	Nhanvien *p, *q;
	string tenMaNV, tenNV;
	int soDT;
	if (first != NULL){
		for (p = first;p->next != NULL; p=p->next){
			for (q = p->next; q!=NULL;q=q->next){
				if ((p->get_hoten() and q->get_hoten()) != " "){
					tenMaNV=p->get_manv();
					tenNV=p->get_hoten();
					soDT=p->get_sdt();
					p->Get(q->get_manv(),q->get_hoten(),q->get_sdt());
					q->Get(tenMaNV,tenNV,soDT);
				}
			}
		}
	}
}

Nhanvien * Quanli::timkiem(char *manv){
	Nhanvien *p = first;
	while( p!= NULL && p->get_manv() != 0){
		p = p->next;
	}
	return p;
}

int main(){
	Quanli ob;
	ob.nhap();
	cout <<"\n Hien thi cac danh sach nhan vien: ";
	ob.xuat();
	ob.sapxep();
	cout <<"\nDanh sach nhan vien sau khi sap xep theo ten: ";
	ob.xuat();
	string ma;
	cout << "Nhap vao ma nhan vien muon tim kiem : ";
	getline (cin,ma);
	Nhanvien *p = ob.timkiem(ma);
	string c;
	if (p!=NULL){
		cout <<"\nDa tim thay nhan vien cua ban! ";
		cout <<"\nMa nhan vien: " << p->get_manv();
		cout <<"\nTen nhan vien: " << p->get_hoten();
		cout <<"\nSo dien thoai: " << p->get_sdt();
	}else {
		cout << "\nKhong tim thay ma nhan vien nay!!"
	}
	return 0;
}