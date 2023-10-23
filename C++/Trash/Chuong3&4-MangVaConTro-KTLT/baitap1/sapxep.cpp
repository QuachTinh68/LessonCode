#include <iostream>
using namespace std;

int main() {
    int n, a[100], i, j, temp, new_num;
    cout << "Nhap so phan tu n: ";
    cin >> n;
    cout << "Nhap cac phan tu cua day: ";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (i = 1; i < n; i++) {
        temp = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > temp) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
    cout << "Day so da sap xep theo thu tu tang dan: ";
    for (i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "Nhap so moi can chen vao day: ";
    cin >> new_num;

    i = 0;
    while (i < n && a[i] < new_num) {
        i++;
    }
    for (j = n - 1; j >= i; j--) {
        a[j + 1] = a[j];
    }
    a[i] = new_num;
    n++;
    cout << "Day so sau khi chen " << new_num << " la: ";
    for (i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}