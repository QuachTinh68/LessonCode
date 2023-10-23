#include <iostream>
#include <string>
using namespace std;

struct thuoc {
    string ten;
    int nam;
    int soluong;
    float dongia;
};

void nhap(thuoc ds[], int n) {
    for (int i = 0; i < n; i++) {
        fflush(stdin);
        cout << "Nhap thong tin thuoc thu: " << i + 1 << endl;
        do  {
            cout << "\nNhap ten thuoc (nhap *** de ket thuc): ";
            getline(cin, ds[i].ten);
            if (ds[i].ten == "***") {
                break;
            }
            cout << "\nNhap nam het han: ";
            cin >> ds[i].nam;
            cout << "\nNhap so luong: ";
            cin >> ds[i].soluong;
            cout << "\nNhap gia: ";
            cin >> ds[i].dongia;
            cin.ignore(); // bỏ qua kí tự '\n' trong bộ đệm nhập chuỗi
        }while (true);
    }
}

void in(thuoc ds[], int n) {
    cout << "\nDanh sach thuoc:\n";
    for (int i = 0; i < n; i++) {
        cout << ds[i].ten << "\t" << ds[i].nam << "\t" << ds[i].soluong << "\t" << ds[i].dongia << endl;
    }
}

void check(thuoc ds[], int n) {
    cout << "\nCac thuoc het han truoc nam 2023:\n";
    for (int i = 0; i < n; i++) {
        if (ds[i].nam <= 2022) {
            cout << ds[i].ten << "\t" << ds[i].nam << "\t" << ds[i].soluong << "\t" << ds[i].dongia << endl;
        }
    }
}

int main() {
    int n;
    cout << "Nhap so luong thuoc: ";
    cin >> n;
    thuoc a[100];
    nhap(a, n);
    in(a, n);
    check(a, n);
    return 0;
}
