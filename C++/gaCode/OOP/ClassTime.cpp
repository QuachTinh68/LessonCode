#include <bits/stdc++.h>
using namespace std;

class Time{
	private: 
		int h,m,s;
	public:
		Time(){
			h=m=s=0;
		};
		Time (int a, int b, int c){
			h = a;
			m = b;
			s = c;
		}
		void nhap();
		void in();
		void chuanhoa();
		void giatang(int a, int b, int c);
		void dieuchinh(int a, int b, int c);	
};
void Time::nhap(){
	cout << "\nNhap gio, phut, giay: " << endl;
	cin >> h >> m >> s;
}
void Time::in(){
	cout << h << ":" << m << ":" << s << endl;
}
void Time::chuanhoa(){
	long long tong = h*3600 +m*60 + s;
	h = (tong/3600)%24;
	m = (tong/60)%60;
	s= tong %60;
}
void Time::giatang(int a, int b, int c){
	h+=a;
	m+=b;
	s+=c;
	chuanhoa();
}
void Time::dieuchinh(int a, int b, int c){
	h = a;
	m = b;
	s = c;
	chuanhoa();
}
int main(){
	Time t,t2;
	t.nhap();
	t2.nhap();
	cout << "\nThoi giam sau khi chuan hoa la" << endl;
	t.chuanhoa();
	t.in();
	cout << "\nThoi giam sau khi tang la" << endl;
	int a, b, c;
	cout << "\nNhap so gio phut giay can tang" << endl;
	cin >> a,b,c;
	t.giatang(a,b,c);
	t.in();
	int x,y,z;
	cout << "\nNhap so gio phut giay dieu chinh" << endl;
	cin >> x>> y >> z;
	cout << "\nThoi giam sau khi dieu chinh la" << endl;
	t2.dieuchinh(x,y,z);
	t2.in();
}