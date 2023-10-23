#include <iostream>
using namespace std;

void NhapdaySo(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

int main(){
    int n;
    cout << "Nhap so phan tu cua day: ";
    cin >> n;
    int a[n], Chan[100], Le[100], ConLai[100];
    int demChan = 0, demLe = 0, demConLai = 0;
    NhapdaySo(n, a);
    for (int i = 0; i < n; i++) {
        if (a[i] % 3 == 0 && a[i] % 2 == 0) {
            Chan[demChan] = a[i];
            demChan++;
        } else if (a[i] % 3 == 0 && a[i] % 2 != 0) {
            Le[demLe] = a[i];
            demLe++;
        } else {
            ConLai[demConLai] = a[i];
            demConLai++;
        }
    }

    cout << "Cac so chan chia het cho 3 la: ";
    for (int i = 0; i < demChan; i++) {
        cout << Chan[i] << " ";
    }
    cout << endl;
     cout << "Cac so con lai la: ";
    for (int i = 0; i < demConLai; i++) {
        cout << ConLai[i] << " ";
    }
    cout << endl;
    cout << "Cac so le chia het cho 3 la: ";
    for (int i = 0; i < demLe; i++) {
        cout << Le[i] << " ";
    }
    cout << endl;

   
    return 0;
}
