#include <bits/stdc++.h>
using namespace std;

void thongKeKyTu(char* str) {
    int demKyTu[26] = {0}; 
    int demKhongKyTu = 0;
    while (*str != '\0') {
        char c = *str;
        if (c >= 'a' && c <= 'z') { 
            demKyTu[c - 'a']++;
        } else if (c >= 'A' && c <= 'Z') { 
            demKyTu[c - 'A']++;
        } else {
            demKhongKyTu++;
        }
        str++;
    }
    for (int i = 0; i < 26; i++) {
        if (demKyTu[i] > 0) {
            cout << "So ky tu " << char(i + 'A') << " la " << demKyTu[i] << endl;
        }
    }
    cout << "Cac ky tu khac la " << demKhongKyTu<< endl;
}
int main() {
    const int MAX_LEN = 100;
    char str[MAX_LEN];
    do{	
    cout << "Nhap chuoi can thong ke: ";
    cin.getline(str, MAX_LEN);
    thongKeKyTu(str);
    break;
		}
    while (str > 0);
    return 0;
}
