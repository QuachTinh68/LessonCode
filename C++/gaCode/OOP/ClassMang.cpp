#include <iostream>
#include <cstdlib>
using namespace std;

class Mang {
    int* a; // dùng mảng cấp phát động
    int n; // kích thước mảng

public:
    void nhap();
    void xuat();
    Mang cong(Mang m2);
};

void Mang::nhap() {
    cout << "\n Nhap n (n>0): ";
    cin >> n;
    a = new int[n];
    if (a == NULL) {
        cout << "\n Loi cap phat bo nho!";
        return;
    }

    for (int i = 0; i < n; i++) {
        cout << "\n a[" << i << "] = ";
        cin >> a[i];
    }
}

void Mang::xuat() {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

Mang Mang::cong(Mang m2) {
    Mang m;
    // hai đối tượng cộng được phải có cùng kích thước
    if (n != m2.n) { // kiểm tra kích thước
        cout << "\n 2 mang khong cung kich thuoc";
        exit(1);
    }
    m.a = new int[n];
    if (m.a == NULL) {
        cout << "\n Loi cap phat bo nho!";
        exit(1);
    }
    for (int i = 0; i < n; i++)
        m.a[i] = a[i] + m2.a[i];
    m.n = n; // gán kích thước của mảng m là n
    return m;
}

int main() {
    Mang m1, m2, m3;
    cout << "\n\nNhap mang thu nhat:";
    m1.nhap();
    cout << "\n Mang thu nhat: ";
    m1.xuat();

    cout << "\n\nNhap mang thu hai:";
    m2.nhap();
    cout << "\n Mang thu hai: ";
    m2.xuat();

    m3 = m1.cong(m2);
    cout << "\n\nTong hai mang :";
    m3.xuat();

    return 0;
}
