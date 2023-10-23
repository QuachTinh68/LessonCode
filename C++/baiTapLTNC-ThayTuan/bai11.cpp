#include <iostream>
#include <cstring>
using namespace std;

const int MAX_NUM_STRINGS = 10;
const int MAX_STRING_LENGTH = 100;

void nhapChuoi(char str[], int maxLength) {
    cin.getline(str, maxLength);
}

void sapXepChuoi(char danhSachChuoi[][MAX_STRING_LENGTH], int soLuongChuoi) {
    for (int i = 0; i < soLuongChuoi - 1; i++) {
        for (int j = i + 1; j < soLuongChuoi; j++) {
            if (strcmp(danhSachChuoi[i], danhSachChuoi[j]) > 0) {
                char temp[MAX_STRING_LENGTH];
                strcpy(temp, danhSachChuoi[i]);
                strcpy(danhSachChuoi[i], danhSachChuoi[j]);
                strcpy(danhSachChuoi[j], temp);
            }
        }
    }
}

void hienThiChuoi(char danhSachChuoi[][MAX_STRING_LENGTH], int soLuongChuoi) {
    cout << "Danh sach chuoi da sap xep theo thu tu tang dan:" << endl;
    for (int i = 0; i < soLuongChuoi; i++) {
        cout << danhSachChuoi[i] << endl;
    }
}

int main() {
    char danhSachChuoi[MAX_NUM_STRINGS][MAX_STRING_LENGTH];
    int soLuongChuoi = 0;

    cout << "Nhap cac chuoi toi da " << MAX_NUM_STRINGS << " chuoi, moi chuoi toi da " << MAX_STRING_LENGTH - 1 << " ky tu:" << endl;
    while (soLuongChuoi < MAX_NUM_STRINGS) {
        char chuoi[MAX_STRING_LENGTH];
        cout << "Nhap chuoi thu, nhan enter de ket thuc nhap " << soLuongChuoi + 1 << ": ";
        nhapChuoi(chuoi, MAX_STRING_LENGTH);
        if (strlen(chuoi) == 0) {
            break;
        }
        strcpy(danhSachChuoi[soLuongChuoi], chuoi);
        soLuongChuoi++;
    }
    sapXepChuoi(danhSachChuoi, soLuongChuoi);
    hienThiChuoi(danhSachChuoi, soLuongChuoi);

    return 0;
}
