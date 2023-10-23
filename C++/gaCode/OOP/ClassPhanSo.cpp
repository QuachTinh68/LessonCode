#include <bits/stdc++.h>
using namespace std;

class Phanso{
	private:
		int tu, mau;
	public:
		void nhap();
		void in();
		Phanso Cong(Phanso p);
		Phanso Nhan(Phanso p);
		Phanso Tru(Phanso p);
		friend void Chia(Phanso p1, Phanso p2);
		int get_tu(){
			return tu;
		}
		int get_mau(){
			return mau;
		}
};
int UCLN(int A, int B) {
    if (B == 0)
        return A;
    return UCLN(B, A%B);
}

void Phanso::nhap(){
	cout << "\nNhap tu so" << endl;
	cin >> tu;
	cout << "\nNhap mau so" << endl;
	cin >> mau;
}
void Phanso::in(){
	cout << tu << "/" << mau << endl;
}

Phanso Phanso::Cong(Phanso p){
	Phanso ps;
	ps.tu = tu + p.tu;
	ps.mau = mau + p.mau;
	return ps;
}

int main(){
	
}


