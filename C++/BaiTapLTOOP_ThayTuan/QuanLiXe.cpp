#include<bits/stdc++.h>
using namespace std;

class XeNoiThanh{
	private:
		string msc, hoten, soxe, sotuyen;
		float soKm, doanhThu;
	public:
		void Nhap(XeNoiThanh xe[], int n);
		void Xuat(XeNoiThanh xe[], int n);
		float &get_doanhThu(){
			return doanhThu;
		};
		void tongDoanhThu(XeNoiThanh xe[], int n);
};

void XeNoiThanh::Nhap(XeNoiThanh xe[], int n){
	for (int i=0;i<n;i++){
		cin.ignore();
		cout <<"\nNhap thong tin xe noi thanh thu: " << i+1 << endl;
		cout <<"Nhap ma so xe: "; getline(cin,xe[i].msc);
		cout << "Nhap ho ten tai xe: "; 
		getline(cin, xe[i].hoten);
		cout << "Nhap so xe: "; getline(cin, xe[i].soxe);
		cout << "Nhap so tuyen: ";
		getline(cin, xe[i].sotuyen);
		cout << "Nhap so km di duoc: ";
		cin >> xe[i].soKm;
		cin.ignore();
		cout << "Nhap doanh thu xe noi thanh: ";
		cin >> xe[i].doanhThu;
	}
}

void XeNoiThanh::Xuat(XeNoiThanh xe[], int n){
	for (int i=0;i<n;i++){
		cout<< xe[i].msc << "\t" 
			<< xe[i].hoten <<"\t" 
			<< xe[i].soxe <<"\t" 
			<< xe[i].sotuyen <<"\t" 
			<< xe[i].soKm <<"\t" 
			<< xe[i].doanhThu 
			<< endl;
	}
}

void XeNoiThanh::tongDoanhThu(XeNoiThanh xe[], int n){
	float tong;
	cout <<"\nTong doanh thu xe noi thanh la:" ;
	for (int i=0;i<n;i++){
		tong+=xe[i].get_doanhThu();
	}
	cout <<tong << endl;
}
//////////////////////////////////////////////////////////////////
class XeNgoaiThanh{
	private:
		string msc, hoten, soxe, noiden;
		int  songaydi;
		float doanhThu;
	public:
		void Nhap(XeNgoaiThanh xe[], int m);
		void Xuat(XeNgoaiThanh xe[], int m);
		float &get_doanhThu(){
			return doanhThu;
		};
		void tongDoanhThu(XeNgoaiThanh xe[], int m);
};
void XeNgoaiThanh::Nhap(XeNgoaiThanh xe[], int m){
	for (int i=0;i<m;i++){
		cin.ignore();
		cout <<"\nNhap thong tin xe ngoai thanh thu: " << i+1 << endl;
		cout <<"Nhap ma so xe: "; getline(cin,xe[i].msc);
		cout << "Nhap ho ten tai xe: "; 
		getline(cin, xe[i].hoten);
		cout << "Nhap so xe: "; getline(cin, xe[i].soxe);
		cout << "Nhap noi den: ";
		getline(cin, xe[i].noiden);
		cout << "Nhap so ngay di duoc: ";
		cin >> xe[i].songaydi;
		cin.ignore();
		cout << "Nhap doanh thu xe ngoai thanh: ";
		cin >> xe[i].doanhThu;
	}
}
void XeNgoaiThanh::Xuat(XeNgoaiThanh xe[], int m){
	for (int i=0;i<m;i++){
		cout<< xe[i].msc << "\t" 
			<< xe[i].hoten <<"\t" 
			<< xe[i].soxe <<"\t" 
			<< xe[i].songaydi <<"\t" 
			<< xe[i].doanhThu 
			<< endl;
	}
}void XeNgoaiThanh::tongDoanhThu(XeNgoaiThanh xe[], int m){
	float tong;
	cout <<"\nTong doanh thu xe ngoai thanh la:" ;
	for (int i=0;i<m;i++){
		tong+=xe[i].get_doanhThu();
	}
	cout <<tong << endl;
}
int main(){
	int n, m; 
	cout << "Nhap So Luong Xe Noi Thanh: ";
	cin >> n;
	cin.ignore();
	cout <<"Nhap so luong xe ngoai thanh: ";
	cin >> m;
	/////////////////////////////////
	XeNoiThanh xe[n];
	xe[0].Nhap(xe,n);
	xe[0].tongDoanhThu(xe,n);
	xe[0].Xuat(xe,n);
	////////////////////////////////
	XeNgoaiThanh xeN[m];
	xeN[0].Nhap(xeN,n);
	xeN[0].tongDoanhThu(xeN,n);
	xeN[0].Xuat(xeN,n);	
}