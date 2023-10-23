#include <iostream>
using namespace std;

int main() {
    int demtu = 0;
    bool tu = false;
    char ch;
    cout << "Nhap day ki tu: ";
    while (cin.get(ch)) {
        if (isalpha(ch)) {  
            tu = true; 
        } else if (tu) { 
           demtu++;  
            tu = false;  
        }
        if (ch == '\n') { 
            break;  
        }
    }
    cout << "So tu trong day la : " << demtu << endl;
    return 0;
}