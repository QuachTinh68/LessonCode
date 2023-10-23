#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
const int MAX_MAT_HANG = 100;
struct MatHang
{
    char maHang[10];
    char tenHang[30];
    int soLuong;
};
int TrungMa(Thuebao a[], int k, char ma[])
{
	for (int i = 0; i < k; i++)
	if (strcmp(a[i].maso, ma) == 0)
	
	return 1;
	
	return 0;
}
void nhapMatHang(MatHang dsMatHang[], int &n)
{
    cout << "Nhap so luong mat hang: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Nhap thong tin mat hang thu " << i + 1 << ":" << endl;
        bool trungMaHang;
        do
        {
            trungMaHang = false;
            cout << "Ma hang: ";
            cin >> dsMatHang[i].maHang;

            for (int j = 0; j < i; j++)
            {
                if (strcmp(dsMatHang[i].maHang, dsMatHang[j].maHang) == 0)
                {
                    cout << "Ma hang nay da ton tai. Vui long nhap lai!" << endl;
                    trungMaHang = true;
                    break;
                }
            }
        } while (trungMaHang);

        cout << "Ten hang: ";
        cin.ignore();
        cin.getline(dsMatHang[i].tenHang, 30);

        cout << "So luong: ";
        cin >> dsMatHang[i].soLuong;
    }
}

void timKiemMatHang(MatHang dsMatHang[], int n, char maHangCanTim[10])
{
    bool timThay = false;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(dsMatHang[i].maHang, maHangCanTim) == 0)
        {
            timThay = true;
            if (dsMatHang[i].soLuong > 0)
            {
                cout << "Thong tin mat hang co ma " << dsMatHang[i].maHang << ":" << endl;
                cout << "Ten hang: " << dsMatHang[i].tenHang << endl;
                cout << "So luong: " << dsMatHang[i].soLuong << endl;
            }
            else
            {
                cout << "Hien tai da het hang cua mat hang nay." << endl;
            }
            break;
        }
    }
    if (!timThay)
    {
        cout << "Cua hang khong co mat hang nay." << endl;
    }
}

void inMatHangMax(MatHang dsMatHang[], int n)
{
    int maxSo Luong = dsMatHang[0].soLuong;
    for (int i = 1; i < n; i++)
    {
        if (dsMatHang[i].soLuong > maxSoLuong)
        {
            maxSoLuong = dsMatHang[i].soLuong;
        }
    }

    cout << "Cac mat hang co so luong lon nhat la:"<< endl;
    for (int i = 0; i < n; i++)
    {
         if (dsMatHang[i].soLuong == maxSoLuong)
        {
            cout << "Ma hang: " << dsMatHang[i].maHang << ", Ten hang: " << dsMatHang[i].tenHang << ", So luong: " << dsMatHang[i].soLuong << endl;
        }
    }
}
void mySwap(MatHang &a, MatHang &b)
{
    MatHang temp = a;
    a = b;
    b = temp;
}

void sapXepMatHangTheoSoLuongGiamDan(MatHang dsMatHang[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (dsMatHang[j].soLuong > dsMatHang[i].soLuong)
            {
                mySwap(dsMatHang[i], dsMatHang[j]);
            }
        }
    }
}

void inDanhSachMatHang(MatHang dsMatHang[], int n)
{
    cout << "Danh sach mat hang: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Ma hang: " << dsMatHang[i].maHang << ", Ten hang: " << dsMatHang[i].tenHang << ", So luong: " << dsMatHang[i].soLuong << endl;
    }
}
int main()
{
    int n;
    MatHang dsMatHang[MAX_MAT_HANG];

    while (true)
    {
        cout << "\n====== MENU ======\n";
        cout << "1. Nhap mat hang\n";
        cout << "2. Tim kiem mat hang\n";
        cout << "3. In mat hang co so luong lon nhat\n";
        cout << "4. Sap xep mat hang trong danh sach theo so luong hang hien co\n";
        cout << "0. Thoat\n";
        cout << "===================\n";
        int choice;
        cout << "Nhap lua chon cua ban: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                nhapMatHang(dsMatHang, n);
                break;
            case 2:
                char maHangCanTim[10];
                cout << "Nhap ma hang can tim kiem: ";
                cin >> maHangCanTim;
                timKiemMatHang(dsMatHang, n, maHangCanTim);
                break;
            case 3:
                inMatHangMax(dsMatHang, n);
                break;
            case 4:
			    sapXepMatHangTheoSoLuongGiamDan(dsMatHang, n);
			    inDanhSachMatHang(dsMatHang, n);
			    break;
            case 0:
                cout << "Thoat chuong trinh.\n";
                return 0;
            default:
                cout << "Lua chon khong hop le. Vui long nhap lai.\n";
                break;
        }
    }

    return 0;
}