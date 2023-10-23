#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, n;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    cout << "Nhap n: ";
    cin >> n;
    if (a <= 0 || b <= a || b > a + n) {
        cout << "Nhap sai, a phai > 0, a < b, b <= a + n" << endl;
        return 0;
    }
    srand(time(0));
    for (int i = 0; i < n; i++) {
        int x = rand() % (b - a + 1) + a;
        cout << x << " ";
    }
    return 0;
}
