#include <bits/stdc++.h>
using namespace std;



bool isValidDate(int day, int month, int year) {
    if (year <= 0) {
        return false;
    }
    if (month < 1 || month > 12) {
        return false;
    }

    switch (month) {
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
             
                return (day >= 1 && day <= 29);
            } else {
               
                return (day >= 1 && day <= 28);
            }
        case 4: 
        case 6:
        case 9:
        case 11:
            return (day >= 1 && day <= 30);
        default: 
            return (day >= 1 && day <= 31);
    }
}

class Date{
	private:
		int ngay,thang,nam;
	public:
		void Nhap(Date date[], int n);
		void Xuat(Date date[],int n);
		void TangNgay(int k);
		int TinhKhoangCanh(const Date &otherDate);
		int &get_ngay(){
			return ngay;
		}
		int &get_thang(){
			return thang;
		}
		int &get_nam(){
			return nam;
		}
};

void Date::Nhap(Date date[],int n) {
        do {
            cout << "Nhap ngay: ";
            cin >> ngay;
            cin.ignore();
            cout << "Nhap thang: ";
            cin >> thang;
            cin.ignore();
            cout << "Nhap nam: ";
            cin >> nam;
            cin.ignore();
            if (!isValidDate(ngay, thang, nam)) {
                cout << "Ngay thang nam khong hop le. Vui long nhap lai." << std::endl;
            }
        } while (!isValidDate(ngay, thang, nam));
}

void Date::TangNgay(int k) {
    ngay += k;
    	while (ngay > 31) {
	        thang++;
	        ngay -= 31;
	        if (thang > 12) {
	            thang = 1;
	            nam++;
	        }
	    }
}
int Date::TinhKhoangCach(const Date &otherDate) {
    int ngay1 = ngay, thang1 = thang, nam1 = nam;
    int ngay2 = otherDate.get_ngay(), thang2 = otherDate.get_thang(), nam2 = otherDate.get_nam();

    int distance = 0;

    while (ngay1 != ngay2 || thang1 != thang2 || nam1 != nam2) {
        ngay1++;
        if (ngay1 > 31) {
            thang1++;
            ngay1 = 1;
            if (thang1 > 12) {
                nam1++;
                thang1 = 1;
            }
        }

        distance++;
    }

    return distance;
}

void Date::Xuat(Date date[],int n){
		cout << ngay<<"/"
			 << thang<<"/"
			 << nam
			 << endl;		
}

int main(){
	int n;
	cout <<"Nhap so luong ngay: ";
	cin >> n;
	Date date[n], date2[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap ngay thu " << i + 1 << endl;
        date[i].Nhap(date,n);
    }

    for (int i = 0; i < n; i++) {
        date[i].Xuat(date,n);
    }
	int k;
	
    cout << "Nhap so ngay muon tang: ";
    cin >> k;
    for (int i = 0; i < n; i++) {
        date[i].TangNgay(k);
    }
    for (int i = 0; i < n; i++) {
        date[i].Xuat(date,n);
    }
    int khoangCach = date1.TinhKhoangCach(date2);
    cout << "Khoang cach giua hai ngay la: " << khoangCach << " ngay." << endl;
}