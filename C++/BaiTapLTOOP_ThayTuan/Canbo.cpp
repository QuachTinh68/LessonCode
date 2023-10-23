#include <bits/stdc++.h>

using namespace std;

class Canbo {
private:
    string ten;
    float hesoluong;
    static float mucluongcoban;

public:
    void nhap();
    float tinhLuong();
    void xuat();
    float get_hesoluong() {
        return hesoluong;
    }
};

float Canbo::mucluongcoban = 4000000; 

void Canbo::nhap() {
    cout << "Nhap ten can bo: " << endl;
    getline(cin, ten);
    cout << "Nhap he so luong: " << endl;
    cin >> hesoluong;
 
}

float Canbo::tinhLuong() {
    float luong = hesoluong * mucluongcoban;
    return luong;
}

void Canbo::xuat() {
    cout << "Ten: " << ten << endl;
    cout << "He so luong: " << fixed << setprecision(1)<<hesoluong << endl;
}

class Quanli{
	private:
		Canbo cb[100];
		int n;
	public:
		void nhapds();
		void xuatds();
		void sumLuong();
		void TimMax();
		void sapXep();
};

void Quanli::nhapds(){
	cout << "Nhap danh sach can bo: "; cin >> n;
	cin.ignore();
	for (int i=0;i<n;i++){
		cb[i].nhap();
		cin.ignore(); 
	}
}

void Quanli::xuatds(){
	cout << "Danh sach can bo: " << endl;
	for (int i=0;i<n;i++){
		cb[i].xuat();
	}
}

void Quanli::sumLuong(){
	long long luong=0;
	for (int i=0;i<n;i++){
		luong+=cb[i].tinhLuong();
	}
	cout << "Tong luong phai tra la: " << endl;
	cout << luong << endl;
}
void Hoanvi(Canbo &a, Canbo &b){
	Canbo temp;
	temp=a;
	a=b;
	b=temp;
}
void Quanli::sapXep(){
	for (int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if (cb[i].tinhLuong() < cb[j].tinhLuong()){
				Hoanvi(cb[i],cb[j]);
			}
		}
	}
}
void Quanli::TimMax(){
	Canbo res;
	res=cb[0];
	for (int i=0;i<n;i++){
		if (res.tinhLuong() < cb[i].tinhLuong()){
			res=cb[i];
		}
	}
	cout <<"Can bo co so luong cao nhat la: " << endl;
	res.xuat();
	cout<<res.tinhLuong() << endl;
}
int main() {
    Quanli ob;
    ob.nhapds();
    ob.xuatds();
    ob.sumLuong();
    ob.TimMax();
    ob.sapXep();
    ob.xuatds();
    return 0;
}
