#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so phan tu cua day: ";
    cin >> n;
    int a[n];
    cout << "Nhap cac phan tu cua day: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int chiahet[n];
    int count = 0; 
    for (int i = 0; i < n; i++) {
        if (a[i] % 5 != 0) { 
            chiahet[count] = a[i];
            count++;
        }
    }
    cout << "Day sau khi xoa cac phan tu chia het cho 5: ";
    for (int i = 0; i < count; i++) { 
        cout << chiahet[i] << " ";
    }
    cout << endl;

    return 0;
}
