#include <iostream>
using namespace std;
struct Date
{
    int D, M, Y;
};

bool hopLe(Date date)
{
    if (date.M < 1 || date.M > 12)
        return false;
    if (date.D < 1)
        return false;
    if (date.M == 2) {
        if ((date.Y % 4 == 0 && date.Y % 100 != 0) || date.Y % 400 == 0)
            return date.D <= 29;
        else
            return date.D <= 28;
    }
    else if (date.M == 4 || date.M == 6 || date.M == 9 || date.M == 11)
        return date.D <= 30;
    else
        return date.D <= 31;
}
Date ngayKeTiep(Date date)
{
    Date tomorrow = date;
    tomorrow.D++;
    if (!hopLe(tomorrow)) {
        tomorrow.D = 1;
        tomorrow.M++;
        if (tomorrow.M > 12) {
            tomorrow.M = 1;
            tomorrow.Y++;
        }
        if (tomorrow.M == 2) {
            if ((tomorrow.Y % 4 == 0 && tomorrow.Y % 100 != 0) || tomorrow.Y % 400 == 0)
                tomorrow.D = 29;
            else
                tomorrow.D = 28;
        }
        else if (tomorrow.M == 4 || tomorrow.M == 6 || tomorrow.M == 9 || tomorrow.M == 11)
            tomorrow.D = 30;
        else
            tomorrow.D = 31;
    }
    return tomorrow;
}


int main() {
    Date date;
    cout << "Nhap ngay (D M Y): ";
    cin >> date.D >> date.M >> date.Y;

    if (!hopLe(date)) {
        cout << "Ngay khong hop le, hay nhap lai." << endl;
        return 0;
    }

    Date tomorrow = ngayKeTiep(date);
    cout << "Ngay ke tiep la: " << tomorrow.D << " " << tomorrow.M << " " << tomorrow.Y << endl;

    return 0;
}

