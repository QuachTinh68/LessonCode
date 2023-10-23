#include <bits/stdc++.h>
using namespace std;
class Canbo{
	private:
		string ma, hoten , chucvu;
		int ngay, thang, nam;
		float heso, luong;
	public:
		void nhap();
		void in();
		float tinhluong();
		float get_heso(){
			return heso;
		}
		string get_chucvu(){
			return chucvu;
		}
		int get_ngay(){
			return ngay;
		}
		int get_thang(){
			return thang;
		}
		int get_nam(){
			return nam;
		}
};
bool check(int day, int month, int year) {
    if (year < 0) {
        return false;
    }
    if (month < 1 || month > 12) {
        return false;
    }
    if (day < 1) {
        return false;
    }

    int maxDay = 31;

    if (month == 4 || month == 6 || month == 9 || month == 11) {
        maxDay = 30;
    } else if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            maxDay = 29;
        } else {
            maxDay = 28;
        }
    }

    if (day > maxDay) {
        return false;
    }

    return true;
}

float Canbo::tinhluong(){
	float phucap = 0.0;
	if (get_chucvu() == "Truong Khoa"){
		phucap = 0.5;
	}else if (get_chucvu() == "Pho Truong Khoa" || get_chucvu() == "Truong Bo Mon"){
		phucap = 0.4;
	}else if (get_chucvu() == " Pho Truong Bo Mon"){
		phucap = 0.3;
	}else {
		phucap = 0.0;
	}
	float luongthang = (heso + phucap) * 1800000;
	return luongthang;
}


void Canbo::nhap(){
	cout << "\nNhap ma can bo: ";
	getline(cin,ma);
	cout << "\nNhap ho ten can bo: ";
	getline(cin,hoten);
	int d, m, y;
	do{
		cout << "\nNhap ngay/thang/nam sinh: "; cin >> d >> m >> y;
		cin.ignore();
	}while(!check(d,m,y));
	ngay = d;
	thang = m;
	nam =y;
	cout << "\nNhap chuc vu can bo: ";
	getline(cin,chucvu);
	cout << "\nNhap he so luong: "; cin >> heso;
	luong = tinhluong();
}
void Canbo::in(){
	cout << ma << " "
		 << hoten << " "
		 << ngay <<"/" << thang <<"/" << nam << " "
		 << chucvu << " "
		 << heso  << " "<< fixed << setprecision(1) << luong << endl;
		 cout <<"\n--------------------------------\n";
}

class Quanly{
	private:
		Canbo cb[50];
		int n;
	public:
		void nhapds();
		void inds();
		void inluongthap();
		void sapxepngay();
};

void Quanly::nhapds(){
	cout << "\nNhap so luong can bo: " ; cin >> n;
	cin.ignore();
	for (int i=0;i<n;i++){
		cout <<"\nNhap thong tin can bo thu: " << i+1 << endl;
		cb[i].nhap();
		cin.ignore();
	}
}

void Quanly::inds(){
	cout << "\nDANH SACH CAN BO" << endl;
	for (int i=0;i < n;i++){
		cout <<"\n--------------------------------\n";
		cb[i].in();
	}
}

void Quanly::inluongthap(){
	float thap;
	thap = cb[0].tinhluong();
	for (int i = 0 ;i<n;i++){
		if (thap > cb[i].tinhluong()){
			thap = cb[i].tinhluong();
		}
	}
	cout << "\nDANH SACH CAN BO CO LUONG THAP NHAT LA: " << endl;
	for (int i=0;i<n;i++){
		if (cb[i].tinhluong() == thap){
			cb[i].in();
		}
	}
}
void Quanly::sapxepngay() {
    if (n == 0) {
        cout << "Danh sach rong." << endl;
        return;
    }
    for (int i = 1; i < n; i++) {
        Canbo current = cb[i];
        int j = i - 1;
        while (j >= 0 && (cb[j].get_nam() < current.get_nam() ||
                          (cb[j].get_nam() == current.get_nam() && cb[j].get_thang() < current.get_thang()) ||
                          (cb[j].get_nam() == current.get_nam() && cb[j].get_thang() == current.get_thang() && cb[j].get_ngay() < current.get_ngay()))) {
            cb[j + 1] = cb[j];
            j--;
        }
        cb[j + 1] = current;
    }

    cout << "DANH SACH CAN BO THEO NGAY, THANG VA NAM SINH:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Thong tin can bo thu " << i + 1 << ":" << endl;
        cb[i].in();
    }
}

int main(){
	Quanly ob;
	ob.nhapds();
	ob.inds();
	ob.inluongthap();
	ob.sapxepngay();
}