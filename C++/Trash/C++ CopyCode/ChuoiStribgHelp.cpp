#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Hàm nh?p m?ng chu?i
void nhapMang(string arr[], int& n)
{
    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;
    cin.ignore(); // Xóa b? ð?m
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap phan tu thu " << i + 1 << " cua mang: ";
        getline(cin, arr[i]);
        // Ki?m tra xem ph?n t? nh?p vào có trùng v?i các ph?n t? trý?c ðó không
        for (int j = 0; j < i; j++)
        {
            if (arr[j] == arr[i])
            {
                cout << "Phan tu nay da ton tai, moi nhap lai!" << endl;
                i--;
                break;
            }
        }
    }
}

// Hàm s?p x?p m?ng chu?i theo th? t? tãng d?n
void sapXepMang(string arr[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr [j] > arr[j + 1]) {
                string temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


// Hàm t?m chu?i có ð? dài l?n nh?t trong m?ng chu?i
string chuoiDaiNhat(string arr[], int n)
{
    string maxStr = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i].length() > maxStr.length())
            maxStr = arr[i];
    }
    return maxStr;
}

// Hàm chèn chu?i vào m?ng ð? s?p x?p ðúng v? trí
void chenChuoi(string arr[], int& n, string x)
{
    int i = n - 1;
    while (i >= 0 && arr[i] > x)
    {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = x;
    n++;
}

// Hàm xóa chu?i t?i v? trí trong m?ng
void xoaChuoi(string arr[], int& n, int pos)
{
    for (int i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
}

// Hàm xu?t m?ng chu?i
void xuatMang(string arr[], int n)
{
    cout << "Mang sau khi nhap: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    string arr[100];
    int n, choice, pos;
    string x;

    do {
        cout << "\n--------------MENU--------------" << endl;
        cout << "1. Nhap mang" << endl;
        cout << "2. Sap xep mang" << endl;
        cout << "3. Tim chuoi dai nhat" << endl;
        cout << "4. Chen chuoi vao mang" << endl;
        cout << "5. Xoa chuoi tai vi tri trong mang" << endl;
        cout << "6. Xuat mang" << endl;
        cout << "7. Thoat chuong trinh" << endl;
        cout << "Nhap lua chon cua ban: ";
        cin >> choice;

        switch (choice) {
            case 1:
                nhapMang(arr, n);
                break;
            case 2:
                sapXepMang(arr, n);
                cout << "Mang sau khi sap xep: ";
                xuatMang(arr, n);
                break;
            case 3:
                x = chuoiDaiNhat(arr, n);
                cout << "Chuoi dai nhat trong mang la: " << x << endl;
                break;
            case 4:
                cout << "Nhap chuoi can chen: ";
                cin.ignore();
                getline(cin, x);
                chenChuoi(arr, n, x);
                cout << "Mang sau khi chen chuoi: ";
                xuatMang(arr, n);
                break;
            case 5:
                cout << "Nhap vi tri can xoa: ";
                cin >> pos;
                xoaChuoi(arr, n, pos);
                cout << "Mang sau khi xoa chuoi: ";
                xuatMang(arr, n);
                break;
            case 6:
                xuatMang(arr, n);
                break;
            case 7:
                cout << "Chuong trinh ket thuc!";
                break;
            default:
                cout << "Lua chon khong hop le. Vui long nhap lai!";
                break;
        }

    } while (choice != 7);

    return 0;
}
