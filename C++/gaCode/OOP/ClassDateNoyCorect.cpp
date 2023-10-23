#include <bits/stdc++.h>
using namespace std;

class Date{
	private:
		int ngay, thang, nam;
	public:
		void nhap();
		void in();
		void tangNgay(int k);
		void Khoangcach();
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


int check(int ngay, int thang, int nam) {
    if (nam < 0 || thang < 1 || thang > 12)
        return 0;

    if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
        if (ngay < 1 || ngay > 30)
            return 0;
    } else if (thang == 2) {
        if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0) {
            if (ngay < 1 || ngay > 29)
                return 0;
        } else {
            if (ngay < 1 || ngay > 28)
                return 0;
        }
    } else {
        if (ngay < 1 || ngay > 31)
            return 0;
    }

    return 1;
}

void Date::nhap() {
    while (true) {
        cout << "\nNhap ngay thang nam: ";
        cin >> ngay >> thang >> nam;
        if (check(ngay, thang, nam) == 0) {
            cout << "Ngay thang nam sai !!" << endl;
        } else {
            break;
        }
    }
}

void Date::tangNgay(int k) {
    ngay += k;
    while (ngay > 0) {
        int maxDay = check(ngay, thang, nam);
        if (ngay > maxDay) {
            ngay -= maxDay;
            thang++;
            if (thang > 12) {
                thang = 1;
                nam++;
            }
        } else {
            break;
        }
    }
}
void Date::in(){
	cout << ngay << "/" << thang << "/" << nam << endl;
}
 int main(){
 	Date date, add;
 	date.nhap();
 	date.in();
 	int k;
 	
 	cout << "\nNhap so ngay tang: " << endl;
 	cin >> k;
 	
 	date.tangNgay(k);
 	date.in();
 }

