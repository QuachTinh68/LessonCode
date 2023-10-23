#include <bits/stdc++.h>
using namespace std;

int hexToDec(string hex) {
    int dec= 0;
    int somu = hex.length() - 1;
    for (int i = 0; i < hex.length(); i++) {
        int digit;
        if (hex[i] >= '0' && hex[i] <= '9') {
            digit = hex[i] - '0';
        } else if (hex[i] >= 'A' && hex[i] <= 'F') {
            digit = hex[i] - 'A' + 10;
        } else if (hex[i] >= 'a' && hex[i] <= 'f') {
            digit = hex[i] - 'a' + 10;
        } else {
            return -1;
        }
        dec += digit * pow(16, somu);
        somu--;
    }
    return decimal;
}
int main() {
    string hex;
    cout << "Nhap so hexa: ";
    cin >> hex;
    int decimal = hexToDec(hex);
    if (decimal == -1) {
        cout << "Nhap sai dinh dang hexa!" << endl;
    } else {
        cout << "Gia tri he 10 tuong ung: " << decimal << endl;
    }
    return 0;
}
