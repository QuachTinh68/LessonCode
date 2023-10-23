#include<bits/stdc++.h>
using namespace std;
class XeNoiThanh{
	private:
		string Ma,HoTen,SoXe,SoTuyen;
		float SoKm, DoanhThu;
	public:
		void Nhap();
		void Xuat();
		float get_DoanhThu(){
			return DoanhThu;
		}
};
void XeNoiThanh::Nhap(){
	cout << "\nNhap ma so chuyen: "; 
	getline(cin, Ma);
	cout << "Nhap ho ten tai xe: ";
	getline(cin, HoTen);
	cout << "Nhap so xe: ";
	getline(cin, SoXe);
	cout <<"Nhap so tuyen: ";
	getline(cin, SoTuyen);
	cout << "Nhap so km di duoc: ";
	cin >> SoKm;
	cin.ignore();
	cout << "Nhap doanh thu: ";
	cin >> DoanhThu;
}
void XeNoiThanh::Xuat(){
	cout << Ma << "\t"
		 << HoTen << "\t"
		 << SoXe << "\t"
		 << SoTuyen << "\t"
		 << SoKm << "\t"
		 << DoanhThu << endl;
}
//////////////////////////////////////////
class XeNgoaiThanh{
	private:
		string Ma,HoTen,SoXe,NoiDen,SoNgayDiDuoc;
		float DoanhThu;
	public:
		void Nhap();
		void Xuat();
		float get_DoanhThu(){
			return DoanhThu;
		}
};

void XeNgoaiThanh::Nhap(){
	cout << "\nNhap ma so chuyen: "; 
	getline(cin, Ma);
	cout << "Nhap ho ten tai xe: ";
	getline(cin, HoTen);
	cout << "Nhap so xe: ";
	getline(cin, SoXe);
	cout <<"Nhap noi den: ";
	getline(cin, NoiDen);
	cout << "Nhap so ngay di duoc: ";
	getline(cin, SoNgayDiDuoc);
	cout << "Nhap doanh thu: ";
	cin >> DoanhThu;
	cin.ignore();
}
void XeNgoaiThanh::Xuat(){
	cout << Ma << "\t"
		 << HoTen << "\t"
		 << SoXe << "\t"
		 << NoiDen << "\t"
		 << SoNgayDiDuoc << "\t"
		 << DoanhThu << endl;
}

class QuanLi{
	private:
		XeNoiThanh xe[100];
		XeNgoaiThanh xeNT[100];
		int n,m;
	public:
		void XuatXe();
		void NhapXe();
		void TongDoanhThu();
};

void QuanLi::NhapXe(){
	cout << "Nhap So Luong Xe Noi Thanh: ";
	cin >> n;cin.ignore();
	for(int i=0;i<n;i++){
		xe[i].Nhap();
		cin.ignore();
	}
	cout << "Nhap so luong xe ngoai thanh: ";
	cin >> m; cin.ignore();
	for (int i=0;i<m;i++){
		xeNT[i].Nhap();
	}
}

void QuanLi::XuatXe(){
	cout << "Danh sach xe noi thanh: " << endl;
	for (int i=0;i<n;i++){
		xe[i].Xuat();
	}
	cout <<"Danh sach xe ngoai thanh: " << endl;
	for (int i=0;i<m;i++){
		xeNT[i].Xuat();
	}
}
void QuanLi::TongDoanhThu(){
	int TongXeNoi=0;
	int TongXeNgoai=0;
	
	for (int i=0;i<n;i++){
		TongXeNoi+=xe[i].get_DoanhThu();
	}
	
	for(int i=0;i<m;i++){
		TongXeNgoai+=xeNT[i].get_DoanhThu();
	}
	cout << "Tong danh thu xe noi la: " << endl;
	cout << TongXeNoi << endl;
	cout << "Tong xe ngoai thanh la: " << endl;
	cout << TongXeNgoai << endl;
}
int main(){
	QuanLi ob;
	ob.NhapXe();
	ob.XuatXe();
	ob.TongDoanhThu();
}
