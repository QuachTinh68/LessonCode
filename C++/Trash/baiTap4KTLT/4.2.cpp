#include <bits/stdc++.h>
using namespace std;
int main() {
    double x, fx;
    for (x = -10.0; x <= 5.0; x += 0.1) {
        fx = pow(x, 5) + pow(x, 1.0/5.0);
        cout << " Khi x = " << x << " "<< "Gia tri cua f(x) = " << fx << endl;
    }
    return 0;
}
