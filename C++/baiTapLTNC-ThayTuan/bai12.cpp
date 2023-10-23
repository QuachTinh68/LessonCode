#include <iostream>
#include <string>
using namespace std;
void nhapDuLieu(string danhSach[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap ho va ten cua sinh vien thu " << i + 1 << ": ";
        getline(cin, danhSach[i]);
    }
}
string trichHo(string hoTen)
{
    string ho = "";
    for (int i = 0; i < hoTen.length(); i++)
    {
        if (hoTen[i] == ' ')
        {
            break;
        }
        ho += hoTen[i]; 
    }
    return ho;
}
void sapXepTheoHo(string *danhSach, int soLuongSinhVien)
{
    for (int i = 1; i < soLuongSinhVien; i++)
    {
        string sinhVienHienTai = *(danhSach + i);
        string hoSinhVienHienTai = trichHo(sinhVienHienTai);
        int j = i - 1;
        while (j >= 0 && trichHo(*(danhSach + j)) > hoSinhVienHienTai)
        {
            *(danhSach + j + 1) = *(danhSach + j);
            j--;
        }
        *(danhSach + j + 1) = sinhVienHienTai;
    }
}
int main()
{
    int soLuongSinhVien;
    do {
    cout << "Nhap so luong sinh vien (lon hon 1): ";
    cin >> soLuongSinhVien;
    cin.ignore();
    }
    while (soLuongSinhVien < 2);
    string *danhSach = new string[soLuongSinhVien];
    
    nhapDuLieu(danhSach, soLuongSinhVien);

    sapXepTheoHo(danhSach, soLuongSinhVien);

    cout << "\nDanh sach sinh vien da sap xep theo thu tu tang dan cua ho:\n";
    for (int i = 0; i < soLuongSinhVien; i++)
    {
        cout << *(danhSach + i) << endl;
    }
    return 0;
}
