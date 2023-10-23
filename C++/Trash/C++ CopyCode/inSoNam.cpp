#include <iostream>

using namespace std;

int main() {
    // in ra 19 lần 
    for (int i = 0; i < 19; i++) {
        // in ra hàng ngang đầu tiên
        if (i == 0) {
            for (int j = 0; j < 8; j++) {
                cout << "* ";
            }
        }
        // in ra hàng dọc
        if (i == 1) {
            cout << "*";
            for (int j = 0; j < 7; j++) {
                cout << " ";
            }
        }
	}
}