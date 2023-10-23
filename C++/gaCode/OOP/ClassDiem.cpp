#include <iostream>
#include <cmath>

#define n 5 // KICH THUOC n LA 5

using namespace std;

class Khonggian {
private:
    int a[n]; // cac thanh phan cua doi tuong diem

public:
    void nhap();
    void xuat();
    float khoangcach(Khonggian d2);
    Khonggian cong(Khonggian d2);
};

void Khonggian::nhap() {
    for (int i = 0; i < n; ++i) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}

void Khonggian::xuat() {
    cout << "(";
    for (int i = 0; i < n - 1; ++i)
        cout << a[i] << ", ";
    cout << a[n - 1] << ")" << endl;
}

float Khonggian::khoangcach(Khonggian d2) {
    float S = 0.0;

    for (int i = 0; i < n; i++)
        S = S + pow(d2.a[i] - a[i], 2);

    return sqrt(S);
}

Khonggian Khonggian::cong(Khonggian d2) {
    Khonggian d;
    for (int i = 0; i < n; i++)
        d.a[i] = a[i] + d2.a[i];

    return d;
}

int main() {
    Khonggian d1, d2, d3;

    cout << "\n Nhap du lieu cho doi tuog thu 1: " << endl;
    d1.nhap();

    cout << "\n Nhap du lieu cho doi tuog thu 2: " << endl;
    d2.nhap();
    cout << "\n Doi tuong d1: ";
    d1.xuat();
    cout << "\n Doi tuong d2: ";
    d2.xuat();

    cout << "\n Khoang cach giua d1 va d2: " << d1.khoangcach(d2);

    d3 = d1.cong(d2);
    
    cout << "\n d1 + d2 = ";
    d3.xuat();

    return 0;
}
