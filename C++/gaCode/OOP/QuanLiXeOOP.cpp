#include <bits/stdc++.h>
using namespace std;

class XeNoi{
	private:
		string ma, hoten, soxe, sotuyen;
		int sokm;
		double dt;
	public:
		void nhap();
		void in();
		double get_dt(){
			return dt;
		}
};
void XeNoi::nhap(){
	cout << "\nNhap ma so xe: ";
	getline(cin,ma);
	cout << "\nNhap ho ten tai xe: ";
	getline(cin,hoten);
	cout << "\nNhap so xe: ";
	getline(cin,soxe);
	cout << "\nNhap so tuyen: ";
	getline(cin, sotuyen);
	cout << "\nNhap so km di duoc: ";
	cin >> sokm;cin.ignore();
	cout << "\nNhap doanh thu: ";
	cin >> dt;
	cin.ignore();
}

void XeNoi::in(){
	cout << ma << " " << hoten <<" " << soxe << " " << sotuyen <<" " << sokm << " " << dt << endl;
}

class XeNgoai{
	private:
		string ma, hoten, soxe, noiden ;
		int songay;
		double dt;
	public:
		void nhap();
		void in();
		double get_dt(){
			return dt;
		}
};
void XeNgoai::nhap(){
	cout << "\nNhap ma so xe: ";
	getline(cin,ma);
	cout << "\nNhap ho ten tai xe: ";
	getline(cin,hoten);
	cout << "\nNhap so xe: ";
	getline(cin,soxe);
	cout << "\nNhap noi den: ";
	getline(cin, noiden);
	cout << "\nNhap so ngay di duoc: ";
	cin >> songay;cin.ignore();
	cout << "\nNhap doanh thu: ";
	cin >> dt;
	cin.ignore();
}

void XeNgoai::in(){
	cout << ma << " " << hoten <<" " << soxe << " " << noiden <<" " << songay << " " << dt << endl;
}	

class Quanli{
	private:
		XeNoi xe[100];
		XeNgoai xeN[100];
		int m,n;
	public:
		void nhapds();
		void inds();
		void tongdt();
};
void Quanli::nhapds(){
	cout << "\nNhap so luong xe noi thanh" << endl;
	cin >> n; cin.ignore();
	for (int i=0;i<n;i++){
		cout << "\nNhap thong tin xe noi thanh thu " << i+1 << endl;
		xe[i].nhap();
	}
	cout << "\nNhap so luong xe ngoai thanh" << endl;
	cin >> m; cin.ignore();
	for (int i=0;i<m;i++){
		cout << "\nNhap thong tin xe noi thanh thu " << i+1 << endl;
		xeN[i].nhap();
	}
}

void Quanli::inds(){
	cout << "\nDanh sach xe noi thanh " << endl;
	for (int i=0;i<n;i++){
		xe[i].in();
	}
	cout <<"\nDanh sach xe ngoai thanh " << endl;
	for (int i=0;i<m;i++){
		xeN[i].in();
	}
}
void Quanli::tongdt (){
	long long tong=0, sum=0;
	for (int i=0;i<n;i++){
		tong+=xe[i].get_dt();
	}
	for (int i=0;i<m;i++){
		sum+=xeN[i].get_dt();
	}
	cout << "\nTong doanh thu xe noi thanh la " << tong << endl;
	cout << "\nTong doanh thu xe ngoai thanh la: " << sum << endl;
}
int main(){
	Quanli ob;
	ob.nhapds();
	ob.inds();
	ob.tongdt();
}
