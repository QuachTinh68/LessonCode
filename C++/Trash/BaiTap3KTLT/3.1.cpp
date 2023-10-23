#include <bits/stdc++.h>
using namespace std;
bool ktNguyenTo(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i<=sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int a, b;
    cout << "Nhap a va b (1 < a < a+100 < b): ";
    cin >> a >> b;
    cout << "Cac so nguyen to trong khoang tu " << a << " den " << b << " la:" << endl;
    if (1<a && a<a+100 && a+100 <b){
    for (int i = a+1 ; i < b; i++) {
        if (ktNguyenTo(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
	}
	else cout << "Nhap lai a va b thoa dieu kien";
    return 0;
}