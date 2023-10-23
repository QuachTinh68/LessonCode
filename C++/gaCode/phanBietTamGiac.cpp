#include <iostream>
#include <cmath>
using namespace std;

string phan_biet_tam_giac(float a, float b, float c) {
    float epsilon = 1e-6f;

    if (abs(a - b) < epsilon && abs(b - c) < epsilon && abs(a - c) < epsilon) {
        return "Tam giac deu";
    } else if (abs(a - b) < epsilon || abs(b - c) < epsilon || abs(a - c) < epsilon) {
        return "Tam giac can";
    } else {
        return "Tam giac thuong";
    }
}

int main() {
    float a, b, c;
    cin >> a >> b >> c;

    cout << phan_biet_tam_giac(a, b, c);

    return 0;
}
