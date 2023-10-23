#include <iostream>
using namespace std;
int main() {
    char s[1000];
    int dem[5] = {0};
    cout << "Nhap day ki tu: "; 
    while (true) {
        char ch = cin.get();
        if (ch == '*') {
            break; 
        }
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'A') {
                dem[0]++;
            } else if (ch == 'e' || ch == 'E') {
                dem[1]++;
            } else if (ch == 'i' || ch == 'I') {
                dem[2]++;
            } else if (ch == 'o' || ch == 'O') {
               dem[3]++;
            } else if (ch == 'u' || ch == 'U') {
                dem[4]++;
            }
        }
    }
    cout << "Tan Suat Xuat Hien Cua Cac Nguyen Am la: " << endl;
    cout << "a: " <<dem[0] << endl;
    cout << "e: " << dem[1] << endl;
    cout << "i: " << dem[2] << endl;
    cout << "o: " <<dem[3] << endl;
    cout << "u: " << dem[4] << endl;
    return 0;
}