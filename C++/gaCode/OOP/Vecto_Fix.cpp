#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

class Vector {
private:
    int n; // kích thước vectơ
    int* a; // dùng mảng cấp phát động

public:
    void nhap();
    void xuat();
    int tich(Vector v2);
    float chieudai();
};

void Vector::nhap() {
    cout << "\n Nhap kich thuoc Vector (n > 0): ";
    cin >> n;
    a = new int[n]; // cấp phát n vùng nhớ
    if (a == NULL) {
        cout << "\n Loi cap phat bo nho!";
        return;
    }
    for (int i = 0; i < n; ++i) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}

void Vector::xuat() {
    cout << "\n";
    for (int i = 0; i < n; ++i)
        cout << a[i] << " ";
}

int Vector::tich(Vector v) { // tích vô hướng 2 vectơ
    int S = 0;
    if (n != v.n) {
        cout << "\n Hai vecto khong cung kich thuoc";
        exit(1);
    }
    for (int i = 0; i < n; ++i)
        S = S + a[i] * v.a[i]; // tích của vectơ hiện tại và vectơ v
    return S;
}

float Vector::chieudai() { // tính độ dài của vecto hiện tại
    float d = 0.0;
    for (int i = 0; i < n; i++)
        d = d + a[i] * a[i];
    return sqrt(d);
}

int main() {
    Vector V1, V2;
    V1.nhap();
    V2.nhap();
    V1.xuat();
    V2.xuat();
    float k = V1.tich(V2);
    cout << "\n Do dai Vector V1 la: " << V1.chieudai();
    cout << "\n Tich vo huong V1 va V2 la: " << V1.tich(V2);

    return 0;
}
