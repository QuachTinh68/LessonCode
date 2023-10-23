#include <iostream>
#include <cstring>
using namespace std;

char* xoaKyTuKhacChuCai(char* str) {
    const int MAX_LEN = 100;
    char* result = new char[MAX_LEN]; 
    int index = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) { 
            result[index] = c; 
            index++;
        }
    }
    result[index] = '\0'; 
    return result;
}

int main() {
    const int MAX_LEN = 100;
    char str[MAX_LEN];
    cout << "Nhap chuoi can xoa ky tu khac chu cai: ";
    cin.getline(str, MAX_LEN);
    char* result = xoaKyTuKhacChuCai(str);
    cout << "Chuoi sau khi xoa ky tu khac chu cai: " << result << endl;
    delete[] result;
    return 0;
}
