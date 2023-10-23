#include <bits/stdc++.h>
using namespace std;

class SinhVien
{
	private:
		string masv, hoten;
		float diemtb;
	public:
		void nhap();
		void xuat();
		void sapXep(int n, SinhVien a[]);
		void inMax(int n, SinhVien a[]);
		float &get_diemtb(){
			return diemtb;
		}
};

void SinhVien::nhap(){
	cout <<"\nNhap ma sinh vien: ";
	getline(cin,masv);
	cout << "\nNhap ho ten sinh vien: ";
	getline(cin,hoten);
	cout << "\nNhap diem trung binh: ";
	cin >> diemtb;
	cin.ignore();
}

void HoanVi(SinhVien &a, SinhVien &b){
	SinhVien temp;
	temp=a;
	a=b;
	b=temp;
}

void SinhVien::sapXep(int n, SinhVien a[]){
	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			if (a[i].get_diemtb() > a[j].get_diemtb()){
				HoanVi(a[i],a[j]);
			}
		}
	}
}

void SinhVien::inMax(int n,SinhVien a[]){
	float max=a[0].get_diemtb();
	for (int i=0;i<n;i++){
		if (max < a[i].get_diemtb())
			max=a[i].get_diemtb();
	}
	cout <<"Sinh vien co diem trung binh lon nhat la: " << endl;
	for (int i=0;i<n;i++){
		if (max==a[i].get_diemtb()){
			a[i].xuat();
		}
	}
}

void SinhVien::xuat(){
	cout << masv << "\t" << hoten << "\t" << diemtb << endl;
}

int main(){
	int n; 
	SinhVien sv[100];
	cout << "Nhap so luong sinh vien : "; 
	cin >> n;
	cin.ignore();
	for (int i=0;i<n;i++){
		cout <<"\nNhap thong tin sinh vien thu: " << i+1;
		sv[i].nhap();
	}
//	SapXep(n, sv);
	sv[0].inMax(n, sv);
	cout <<"Danh sach sinh vien la: " << endl;
	for (int i=0;i<n;i++){
		sv[i].xuat();
	}

}