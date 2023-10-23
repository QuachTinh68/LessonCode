#include <iostream>
using namespace std;
int main() {
    int tong = 0; 
    int tong_le = 0; 
    int dem_le = 0; 
    int x; 
    
    while (true) {
        cin >> x;
        if (x == 0) {
            break;
        }
        tong += x; 
        if (x % 2 == 1) { 
            tong_le += x; 
            dem_le++; // tãng bi?n ð?m lên 1
        }
    }
    double trung_binh_le = 0; 
    if (dem_le > 0) { 
        trung_binh_le = (double)tong_le / dem_le; 
    }  
    cout << "Tong cua day la: " << tong << endl;
    cout << "Trung binh cong cac so le la: " << trung_binh_le << endl;
    
    return 0;
}
