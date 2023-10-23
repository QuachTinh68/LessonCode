#include <iostream>
#include <string>
using namespace std;

class Nhanvien {
private:
    string manv;
    string hoten;
    int sdt;

public:
    Nhanvien *next;
    Nhanvien(string maNV, string hoTen, int soDT) {
        manv = maNV;
        hoten = hoTen;
        sdt = soDT;
        next = NULL;
    }
    string get_manv() {
        return manv;
    }
    string get_hoten() {
        return hoten;
    }
    int get_sdt() {
        return sdt;
    }
    void set(string maNV, string hoTen, int soDT){
    	manv = maNV;
    	hoten = hoTen;
    	sdt = soDT;
	}
};

class Quanli {
private:
    Nhanvien *first;

public:
    Quanli() {
        first = NULL;
    }
    void nhap();
    void xuat();
    void sapxep();
    Nhanvien *timkiem(string manv);
};

void Quanli::nhap() {
    string mnv, ten;
    int so;
    do {
        cout << "\nNhap ma nhan vien: ";
        getline(cin, mnv);
        if (mnv.length() != 0) {
            cout << "\nNhap ten nhan vien: ";
            getline(cin, ten);
            cout << "\nNhap so dien thoai: ";
            cin >> so;
            cin.ignore();
            Nhanvien *tam = new Nhanvien(mnv, ten, so);
            tam->next = first;
            first = tam;
        }
    } while (mnv.length() != 0);
}

void Quanli::xuat() {
    Nhanvien *p = first;
    while (p != NULL) {
        cout << "\n\n----------------------------------";
        cout << "\nMa nhan vien: " << p->get_manv();
        cout << "\nTen nhan vien: " << p->get_hoten();
        cout << "\nSo dien thoai: " << p->get_sdt();
        cout << "\n\n----------------------------------";
        p = p->next;
    }
}

void Quanli::sapxep() {
    Nhanvien *p, *q;
    string tenMaNV, tenNV;
    int soDT;
    if (first != NULL) {
        for (p = first; p->next != NULL; p = p->next) {
            for (q = p->next; q != NULL; q = q->next) {
                if (p->get_hoten() > q->get_hoten()) {
                    tenMaNV = p->get_manv();
                    tenNV = p->get_hoten();
                    soDT = p->get_sdt();                    
                    p->set(q->get_manv(),q->get_hoten(),q->get_sdt());
                    q->set(tenMaNV,tenNV,soDT);
                }
            }
        }
    }
}

Nhanvien *Quanli::timkiem(string manv) {
    Nhanvien *p = first;
    while (p != NULL && p->get_manv() != manv) {
        p = p->next;
    }
    return p;
}

int main() {
    Quanli ob;
    ob.nhap();
    cout << "\nHien thi cac danh sach nhan vien: ";
    ob.xuat();
    ob.sapxep();
    cout << "\nDanh sach nhan vien sau khi sap xep theo ten: ";
    ob.xuat();
    string ma;
    cout << "\nNhap vao ma nhan vien muon tim kiem : ";
    getline(cin, ma);
    Nhanvien *p = ob.timkiem(ma);
    if (p != NULL) {
        cout << "\nDa tim thay nhan vien cua ban! ";
        cout << "\nMa nhan vien: " << p->get_manv();
        cout << "\nTen nhan vien: " << p->get_hoten();
        cout << "\nSo dien thoai: " << p->get_sdt();
    } else {
        cout << "\nKhong tim thay ma nhan vien nay!!";
    }
    return 0;
}
