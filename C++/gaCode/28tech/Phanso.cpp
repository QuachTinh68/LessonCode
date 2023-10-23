#include <bits/stdc++.h>
using namespace std;

int UCLN(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

class PhanSo{
	private:
		int tu;
		int mau;
	public:
		void nhap(){
			cin >> tu >> mau;
		}
		void xuat(){
			cout << tu << "/" << mau << endl;
		}
		void rutgon(){
			int ucln = UCLN(tu, mau);
	        tu /= ucln;
	        mau /= ucln;
		}
};

int main(){
	PhanSo p;
	p.nhap();
	p.rutgon();
	p.xuat();
}