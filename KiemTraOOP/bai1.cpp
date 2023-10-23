#include <bits/stdc++.h>
using namespace std;

class Canbo{
	private:
		string ma, hoten;
		int ngay, thang, nam;
		string chucvu;
		float hesoluong, luongthang;
	public:
		Canbo(){
			ma = hoten= chucvu = " ";
			ngay = thang = nam = 0;
			hesoluong = luongthang = 0.0;
		}
		Canbo(string macb, string hotencb, int ngaycb, int thangcb, int namcb, string chucvucb, float hesoluongcb, float luongthangcb){
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
		float get_luongthang(){
			return luongthang;
		}
		float get_hesoluong(){
			return hesoluong;
		} 
		float luong(float hesoluong);
	
	
};

void Canbo::nhap(){
	cout <<"\nNhap ma can bo: " << endl;
	getline(cin, ma);
	cout <<"\nNhap ho ten can bo: " << endl;
	getline(cin, hoten);
	cout <<"\nNhap ngay sinh can bo: " << endl;
	cout <<"\nNhap ngay: "; cin >> ngay; cin.ignore();
	cout <<"\nNhap thang: "; cin >> thang; cin.ignore();
	cout <<"\nNhap nam: "; cin >> nam; cin.ignore();
	cout <<"\nNhap chuc vu can bo: " << endl;
	getline(cin, chucvu);
	cout <<"\nNhap he so luong can bo: " << endl;
	cin >> hesoluong; cin.ignore();
	cout <<"\nNhap luong thang can bo: " << endl;
	cin >> luongthang; cin.ignore();
}
float Canbo::luong(float hesoluong){
	float heSoPhuCap;
	if (chucvu == "TruongKhoa") {
		        heSoPhuCap = 0.5;
		    } else if (chucvu == "PhoTruongKhoa" || chucvu == "TruongBoMon") {
		        heSoPhuCap = 0.4;
		    } else if (chucvu == "PhoTruongBoMon") {
		        heSoPhuCap = 0.3;
		    } else {
		        heSoPhuCap = 0.0; 
		    }
		}
    float luongThang = (hesoluong + heSoPhuCap) * 1800000;
    return luongThang;
}

void Canbo::in(){
	cout << "\nThong tin can bo :" << endl;
	cout << ma << " "
		<<  hoten<< " "	
		<< ngay << "/"
		<< thang << "/"
		<< nam << "/"
		<< chucvu << " "
		<< hesoluong << " "
		<< luongthang << endl;
}

int main(){
	Canbo ob;
	ob.nhap();
	ob.in();
	float m = ob.luong()
	cout << endl;
	cout << m;
}