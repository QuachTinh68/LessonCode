#include <bits/stdc++.h>
using namespace std;
bool isValidDate(int day, int month, int year) {
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

class CanBo {
private:
    string ma, hoten;
    int ngay, thang, nam;
    string chucvu;
    float hesoluong, luongthang;

public:
    CanBo() {
        ma = hoten = chucvu = " ";
        ngay = thang = nam = 0;
        hesoluong = luongthang = 0.0;
    }

    CanBo(string macb, string hotencb, int ngaycb, int thangcb, int namcb, string chucvucb, float hesoluongcb, float luongthangcb) {
        ma = macb;
        hoten = hotencb;
        ngay = ngaycb;
        thang = thangcb;
        nam = namcb;
        chucvu = chucvucb;
        hesoluong = hesoluongcb;
        luongthang = luongthangcb;
    }

    void nhap();
    void in();
    string get_ma(){
    	return ma;
	}
	string get_hoten(){
		return hoten;
	}
	string get_chucvu(){
		return chucvu;
	}
	
    float get_luongthang() {
        return luongthang;
    }
    float get_hesoluong() {
        return hesoluong;
    }
    float luong();
    int get_nam(){
    	return nam;
	}
	int get_thang(){
		return thang;
	}
	int get_ngay(){
		return ngay;
	}
};

void CanBo::nhap() {
    cout << "\nNhap ma can bo: ";
    cin.ignore();
    getline(cin, ma);
    cout << "\nNhap ho ten can bo: ";
    getline(cin, hoten);
    int Day, Month, Year;
    do {
        cout << "\nNhap ngay sinh can bo (ngay/thang/nam): ";
        cin >> Day;
        cin.ignore();
        cin >> Month;
        cin.ignore();
        cin >> Year;
    } while (!isValidDate(Day, Month,Year));
    ngay = Day;
    thang = Month;
    nam = Year;
    cin.ignore();
    cout << "\nNhap chuc vu can bo: ";
    getline(cin, chucvu);
    cout << "\nNhap he so luong can bo: ";
    cin >> hesoluong;
}

float CanBo::luong() {
    float heSoPhuCap;
    if (chucvu == "Truong Khoa") {
        heSoPhuCap = 0.5;
    } else if (chucvu == "Pho Truong Khoa" || chucvu == "Truong Bo Mon") {
        heSoPhuCap = 0.4;
    } else if (chucvu == "Pho Truong Bo Mon") {
        heSoPhuCap = 0.3;
    }
    float luongThang = (hesoluong + heSoPhuCap) * 1800000;
    return luongThang;
}

void CanBo::in() {
    cout << "\nThong tin can bo: " << endl;
    cout << ma << " "
        << hoten << " "
        << ngay << "/" << thang << "/" << nam << " "
        << chucvu << " "
        << hesoluong  << endl;
}

class Quanly{
	private:
		CanBo cb[50];
		int n;
	public:
		void nhapds();
		void inds();
		void inluongthap();
		void sapxepngay();
};

void Quanly::nhapds(){
	cout <<"\nNhap so luong can bo: " << endl;
	cin >> n;cin.ignore();
	for (int i=0;i<n;i++){
		cout <<"\nNhap thong tin can bo thu " << i+1 << endl;
		cb[i].nhap();
	}
}

void Quanly::inds(){
	cout <<"\nDANH SACH CAN BO "  << endl;
	for(int i=0;i<n;i++){
		cb[i].in();
		cout << endl;
	}
}

void Quanly::inluongthap(){
	if (n==0){
		cout <<"\nDanh sach rong" << endl;
		return;
	}
	float thap = cb[0].luong();
	for (int i=0;i<n;i++){
		float demluong = cb[i].luong();
		if (demluong < thap){
			thap = demluong;
		}
	}
	cout << "Cac can bo co luong thang thap nhat la:" << endl;
    for (int i = 0; i < n; i++) {
        if (cb[i].luong() == thap) {
            cout << "Thong tin can bo thu " << i + 1 << ":" << endl;
            cb[i].in();
            cout << endl;
        }
    }
}
void hoanvi(CanBo &a, CanBo&b){
	CanBo temp = a;
	a=b;
	b=temp;
}
void Quanly::sapxepngay() {
    if (n == 0) {
        cout << "Danh sach rong." << endl;
        return;
    }
	for (int i = 0; i < n - 1; i++) {
	    for (int j = i + 1; j < n; j++) {
	        if (cb[i].get_nam() > cb[j].get_nam() ||
	            (cb[i].get_nam() == cb[j].get_nam() && cb[i].get_thang() > cb[j].get_thang()) ||
	            (cb[i].get_nam() == cb[j].get_nam() && cb[i].get_thang() == cb[j].get_thang() && cb[i].get_ngay() > cb[j].get_ngay())) {
	            	hoanvi(cb[i], cb[j]);
	        }
	    }
	}	
    cout << "DANH SACH CAN BO THEO THU TU GIAM DAN CUA NGAY SINH:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Thong tin can bo thu " << i + 1 << ":" << endl;
        cb[i].in();
    }
}

int main() {
	Quanly ob;
	ob.nhapds();
	ob.inds();
	ob.inluongthap();
	ob.sapxepngay();
    return 0;
}
