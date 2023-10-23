#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct Sach {
    char masach[6];
    char tensach[100];
    int soluong;
    int dongia;
};

void nhapSach(Sach sach[], int n) {
	bool trungMaSach = false;
    do {
        cout << "Nhap ma sach: ";
        cin >> sach[n].masach;
        cin.ignore();  
        for (int i = 0; i < n; i++) {
            if (strcmp(sach[i].masach, sach[n].masach) == 0) {
                trungMaSach = true;
                break;
            }
        }
        if (trungMaSach) {
            cout << "Ma sach da ton tai. Vui long nhap lai.\n";
        }
    } while (trungMaSach);

    cout << "Nhap ten sach: ";
	cin.ignore();
	cin.getline(sach[n].tensach, 100);

    cout << "Nhap so luong: ";
    cin >> sach[n].soluong;
    cout << "Nhap don gia: ";
    cin >> sach[n].dongia;
}


void nhapDanhSachSach(Sach sach[], int& n) {
    cout << "Nhap so sach: ";
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin sach thu " << i + 1 << ":" << endl;
        nhapSach(sach, i);
    }
}


void xuatSach(Sach sach) {
    cout << "Ten sach: " << sach.tensach << ", so luong: " << sach.soluong << endl;
}

void lietKeSachDongiaCaoNhat(Sach sach[], int n) {
    int maxDongia = 0;
    for (int i = 0; i < n; i++) {
        maxDongia = max(maxDongia, sach[i].dongia);
    }
    cout << "Cac sach co don gia cao nhat la:" << endl;
    for (int i = 0; i < n; i++) {
        if (sach[i].dongia == maxDongia) {
            xuatSach(sach[i]);
        }
    }
    cout << "Don gia cao nhat: " << maxDongia << endl;
}

int xoaSach(Sach sach[], int& n) {
    int soLuongSachDaXoa = 0;
    for (int i = 0; i < n; i++) {
        if (sach[i].soluong < 5) {
            for (int j = i + 1; j < n; j++) {
                sach[j - 1] = sach[j];
            }
            n--;
            i--;
            soLuongSachDaXoa++;
        }
    }
    return soLuongSachDaXoa;
}

int main() {
    Sach sach[100];
    int n;
    nhapDanhSachSach(sach, n);

    lietKeSachDongiaCaoNhat(sach, n);

    int soLuongSachDaXoa = xoaSach(sach, n);
    cout << "So sach da bi xoa: " << soLuongSachDaXoa << endl;
    cout << "Danh sach sach sau khi xoa:" << endl;
    for (int i = 0; i < n; i++) {
        xuatSach(sach[i]);
    }

    return 0;
}
