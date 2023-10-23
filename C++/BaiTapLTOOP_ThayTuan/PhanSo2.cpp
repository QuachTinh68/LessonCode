#include <bits/stdc++.h>
using namespace std;

int UCLN(int A, int B) {
    if (B == 0)
        return A;
    return UCLN(B, A%B);
}

int BCNN(int a, int b){
	return a*b/ UCLN(a,b);
} 

class Phanso{
	private:
		int tu;
		int mau;
	public:
		void nhap();
		void xuat();
		Phanso Cong(Phanso p2);
		Phanso Tru(Phanso p2);
		Phanso Nhan(Phanso p2);
		Phanso Chia(Phanso p2);
		int get_tu(){
			return tu;
		}
		int get_mau(){
			return mau;
		}
};

void Phanso::nhap(){
	cout << "Nhap tu so: " << endl;
	cin >> tu;cin.ignore();
	cout << "Nhap mau so: " << endl;
	cin >> mau; cin.ignore();
}

void Phanso::xuat(){
	cout << "PHAN SO CUA BAN LA: " << endl;
	cout << "\t["<<tu << "/" << mau<< "]\t"<< endl;
}

Phanso Phanso::Cong(Phanso p2){
	Phanso p;
    int bscnn = BCNN(mau, p2.mau);
    int tu1 = tu * (bscnn / mau);
    int tu2 = p2.tu * (bscnn / p2.mau);
    
    p.tu = tu1 + tu2;
    p.mau = bscnn;
    
    int ucln = UCLN(p.tu, p.mau);
    p.tu /= ucln;
    p.mau /= ucln;
    
    return p;
}

Phanso Phanso::Tru(Phanso p2){
	Phanso p;
    int bscnn = BCNN(mau, p2.mau);
    int tu1 = tu * (bscnn / mau);
    int tu2 = p2.tu * (bscnn / p2.mau);
    
    p.tu = tu1 - tu2;
    p.mau = bscnn;
    
    int ucln = UCLN(p.tu, p.mau);
    p.tu /= ucln;
    p.mau /= ucln;
    
    return p;
}
Phanso Phanso::Nhan(Phanso p2) {
    Phanso p;
    
    p.tu = tu * p2.tu;
    p.mau = mau * p2.mau;
    
    int ucln = UCLN(p.tu, p.mau);
    p.tu /= ucln;
    p.mau /= ucln;
    
    return p;
}

Phanso Phanso::Chia(Phanso p2) {
    Phanso p;
    
    if (p2.tu == 0) {
        std::cout << "Khong the chia cho phan so 0." << std::endl;
        return p;
    }
    
    p.tu = tu * p2.mau;
    p.mau = mau * p2.tu;
    
    int ucln = UCLN(p.tu, p.mau);
    p.tu /= ucln;
    p.mau /= ucln;
    
    return p;
}

int main() {
    Phanso p1, p2, ketQua;
    int luaChon;

    do {
        cout << "\t\t\tMENU:" << endl;
        cout << "\t\t1. Nhap phan so 1" << endl;
        cout << "\t\t2. Nhap phan so 2" << endl;
        cout << "\t\t3. Cong hai phan so" << endl;
        cout << "\t\t4. Tru hai phan so" << endl;
        cout << "\t\t5. Nhan hai phan so" << endl;
        cout << "\t\t6. Chia hai phan so" << endl;
        cout << "\t\t0. Thoat" << endl;
        cout << "Lua chon cua ban: ";
        cin >> luaChon;

        switch (luaChon) {
            case 1:
                p1.nhap();
                break;
            case 2:
                p2.nhap();
                break;
            case 3:
                ketQua = p1.Cong(p2);
                ketQua.xuat();
                break;
            case 4:
                ketQua = p1.Tru(p2);
                ketQua.xuat();
                break;
            case 5:
                ketQua = p1.Nhan(p2);
                ketQua.xuat();
                break;
            case 6:
                ketQua = p1.Chia(p2);
                ketQua.xuat();
                break;
            case 0:
                cout << "Ket thuc chuong trinh." << endl;
                break;
            default:
                cout << "Lua chon khong hop le. Vui long chon lai." << endl;
                break;
        }

    } while (luaChon != 0);

    return 0;
}

