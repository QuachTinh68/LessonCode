#include <iostream>
using namespace std;
int demSoTu(char* str) {
    int count = 0;
    while (*str != '\0') {
        if (*str == ' ' && *(str - 1) != ' ') {
            count++;
        }
        str++; 
    }
    if (*(str - 1) != ' ') {
        count++;
    }
    return count;
}
int main() {
    const int MAX_LEN = 100;
    char str[MAX_LEN];
    cout << "Nhap chuoi can dem: ";
    cin.getline(str, MAX_LEN);
    int soTu = demSoTu(str);
    cout << "So tu trong chuoi la: " << soTu << endl;
    return 0;
}
