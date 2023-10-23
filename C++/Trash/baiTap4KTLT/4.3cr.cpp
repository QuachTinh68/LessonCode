#include <bits/stdc++.h>
using namespace std;
int main() {
    int num;
	int max_val = INT_MIN;  //gán max_vl v?i gía tr? nh? nh?t ð? so sánh v?i các giá tr? sau ðó
    int min_val = INT_MAX;    
    int max_dem = 0;
    int min_dem = 0;
    while (true) {
        cin >> num;
        if (num == 0) {
            break;
        }
        if (num > max_val) {
            max_val = num;
            max_dem = 1;
        } else if (num == max_val) {
            max_dem++;
        }
        if (num < min_val) {
            min_val = num;
            min_dem= 1;
        } else if (num == min_val) {
            min_dem++;
        }
    }
    cout << "Gia tri lon nhat: " << max_val << endl;
    cout << "Tan suat xuat hien: " << max_dem  << endl;
    cout << "Gia tri nho nhat: " << min_val << endl;
    cout << "Tan suat xuat hien: " << min_dem  << endl;
    return 0;
}
