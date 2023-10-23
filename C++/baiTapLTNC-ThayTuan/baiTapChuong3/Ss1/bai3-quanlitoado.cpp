#include <iostream>
#include <cmath>
using namespace std;

struct Diem {
    int x;
    int y;
};

void nhapDiem(Diem &d) {
    cout << "Nhap hoanh do: ";
    cin >> d.x;
    cout << "Nhap tung do: ";
    cin >> d.y;
}

void nhapMangDiem(Diem a[], int &n) {
    cout << "Nhap so luong diem: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin diem thu " << i + 1 << ":" << endl;
        nhapDiem(a[i]);
    }
}

void hienThiDiem(Diem d) {
    cout << "(" << d.x << ", " << d.y << ")";
}

void hienThiMangDiem(Diem a[], int n) {
    for (int i = 0; i < n; i++) {
        hienThiDiem(a[i]);
        cout << endl;
    }
}

int demDiemTruc(Diem a[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i].x == 0 || a[i].y == 0) {
            count++;
        }
    }
    return count;
}

double tinhKhoangCach(Diem d1, Diem d2) {
    return sqrt(pow(d1.x - d2.x, 2) + pow(d1.y - d2.y, 2));
}

double timKhoangCachLonNhat(Diem a[], int n) {
    double maxDistance = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            double distance = tinhKhoangCach(a[i], a[j]);
            if (distance > maxDistance) {
                maxDistance = distance;
            }
        }
    }
    return maxDistance;
}

int main() {
    Diem a[100];
    int n;

    nhapMangDiem(a, n);

    cout << "Cac diem da nhap la: " << endl;
    hienThiMangDiem(a, n);

    int count = demDiemTruc(a, n);
    cout << "So diem nam tren cac truc la: " << count << endl;

    double maxDistance = timKhoangCachLonNhat(a, n);
    cout << "Khoang cach lon nhat la: " << maxDistance << endl;

    return 0;
}
