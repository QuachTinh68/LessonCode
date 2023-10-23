#include <iostream>
using namespace std;
int main() {
    int demtu = 0;
    char ch;
    cout << "Nhap vao mot day ky tu: ";
    while (true) {
        ch = cin.get();
        if (ch == ' ' || ch == '\t' || ch == '\n') {
            demtu++;
        }
        if (ch == '\n') {
            break;
        }
    }
    cout << "So tu trong day la: " << demtu << endl;
    return 0;
}
