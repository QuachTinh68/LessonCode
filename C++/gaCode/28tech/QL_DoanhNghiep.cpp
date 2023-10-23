#include <bits/stdc++.h>
using namespace std;

class DN{
	private:
		string ma, ten;
		int sosv;
	public:
		void nhap();
		void in();
		string getMa(){
			return ma;
		}
		string getTen(){
			return ten;
		}
		int getSosv(){
			return sosv;
		}
};


void DN::nhap(){
	cout << "Nhap ma doanh nghiep: "; getline(cin,ma);
	cout << "Nhap ten doanh nghiep: "; getline(cin,ten);
	cout << "Nhap so luong sinh vien: "; cin >> sosv;
	cin.ignore();
}

void DN::in(){
	cout << ma << "  " << ten << " " << sosv << endl;
}
class QL{
	private:
		int n;
		DN dn[1000];
	public:
		void nhapds();
		void xuatds();
		void sapXep();
};

void QL::nhapds(){
	cout << "Nhap so luong doanh nghiep: " ; cin >> n; cin.ignore();
	for (int i=0;i<n;i++){
		cout << "Nhap thong tin doanh nghiep thu " << i+1 << endl;
		dn[i].nhap();
	}
}
void QL::xuatds(){
	cout << "Danh sach thong tin doanh nghiep: " << endl;
	for (int i=0;i<n;i++){
		dn[i].in();
	}
}
void Hoanvi(DN &a, DN &b){
	DN tmp;
	tmp=a;
	a=b;
	b=tmp;
}
void QL::sapXep(){
	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			if (dn[i].getSosv() < dn[j].getSosv()){
				Hoanvi(dn[i],dn[j]);
			}
		}
	}
}
int main(){
	QL ob;
	ob.nhapds();
	ob.sapXep();
	ob.xuatds();
}