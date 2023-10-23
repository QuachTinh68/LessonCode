#include <iostream>
#include <cstdlib>
using namespace std;

class Dathuc {
private:
    int heso[100]; // Lưu các hệ số của đa thức
    int bac; // Bậc của đa thức

public:
    void nhap();
    void xuat();
    Dathuc cong(Dathuc p);
};

void Dathuc::nhap() {
    cout << "Nhap vao bac cua da thuc: ";
    cin >> bac;
    cout << "Nhap vao cac he so cua da thuc: ";

    for (int i = 0; i <= bac; i++) {
        cout << "He so bac " << i << " la: ";
        cin >> heso[i];
    }
}

void Dathuc::xuat() {
    cout << "Da thuc: ";
    for (int i = 0; i <= bac; i++) {
        if (heso[i] != 0) {
            if (i == 0)
                cout << heso[i];
            else
                cout << " + " << heso[i] << "x^" << i;
        }
    }
    cout << endl;
}

Dathuc Dathuc::cong(Dathuc p) {
    Dathuc c;
    int i;

    if (bac < p.bac) {
        c.bac = p.bac;

        for (i = 0; i <= bac; i++)
            c.heso[i] = heso[i] + p.heso[i];

        for (i = bac + 1; i <= p.bac; i++)
            c.heso[i] = p.heso[i];
    } else {
        c.bac = bac;

        for (i = 0; i <= p.bac; i++)
            c.heso[i] = heso[i] + p.heso[i];

        for (i = p.bac + 1; i <= bac; i++)
            c.heso[i] = heso[i];
    }
    return c;
}

int main() {
    Dathuc ob1, ob2, ob3;
    ob1.nhap();
    ob2.nhap();

    cout << "Da thuc thu nhat: ";
    ob1.xuat();
    cout << "Da thuc thu hai: ";
    ob2.xuat();

    ob3 = ob1.cong(ob2);

    cout << "Da thuc tong: ";
    ob3.xuat();

    return 0;
}
