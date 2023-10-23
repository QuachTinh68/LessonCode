#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap kich thuoc ma tran: ";
    cin >> n;

    int matrix[n][n];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "Nhap gia tri phan tu [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    cout << "Ma tran tam giac duoi: " << endl;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Ma tran tam giac tren: " << endl;
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
