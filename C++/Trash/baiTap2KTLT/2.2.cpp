#include <iostream>
#include <cmath>
using namespace std;

// Tính diện tích của tam giác ABC
double triangleArea(double ax, double ay, double bx, double by, double cx, double cy) {
    return abs((bx - ax) * (cy - ay) - (cx - ax) * (by - ay)) / 2.0;
}

int main() {
    double ax, ay, bx, by, cx, cy, mx, my;

    // Nhập tọa độ của các điểm
    cout << "Nhap toa do diem A: ";
    cin >> ax >> ay;
    cout << "Nhap toa do diem B: ";
    cin >> bx >> by;
    cout << "Nhap toa do diem C: ";
    cin >> cx >> cy;
    cout << "Nhap toa do diem M: ";
    cin >> mx >> my;

    // Tính diện tích của tam giác ABC
    double areaABC = triangleArea(ax, ay, bx, by, cx, cy);

    if (areaABC == 0) {
        cout << "Tam giac ABC khong hop le" << endl;
    } else {
        // Tính diện tích của các tam giác ABM, ACM và BCM
        double areaABM = triangleArea(ax, ay, bx, by, mx, my);
        double areaACM = triangleArea(ax, ay, cx, cy, mx, my);
        double areaBCM = triangleArea(bx, by, cx, cy, mx, my);

        if (areaABM + areaACM + areaBCM == areaABC) {
            cout << "Diem
