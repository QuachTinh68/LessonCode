#include <iostream>
using namespace std;
void doikitu(char* str) {
    int i = 0;
    while (str[i] != '\0') {
        if (i == 0 || str[i - 1] == ' ') {
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] -= ('a' - 'A');
            }
        } else {
            if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] += ('a' - 'A'); 
            }
        }
        i++;
    }
}

int main() {
    const int MAX_LEN = 100;
    char str[MAX_LEN];
    cout << "Nhap chuoi can chuyen: ";
    cin.getline(str, MAX_LEN);
    doikitu(str);
    cout << "Chuoi sau khi duoc chuyen doi: " << str << endl;
    return 0;
}
