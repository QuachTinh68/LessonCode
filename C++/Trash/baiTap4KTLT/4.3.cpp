#include <iostream>
using namespace std;

int main() {
    int n, max, min;
    int a[100];
    int max_count = 0, min_count = 0;
    int i = 0;
    while (true) {
        cin >> a[i];
        if (a[i] == 0) {
            n = i;
            break;
        }
        i++;
    }
    max = a[0];
    min = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
            max_count = 1;
        } else if (a[i] == max) {
            max_count++;
        }
        if (a[i] < min) {
            min = a[i];
            min_count = 1;
        } else if (a[i] == min) {
            min_count++;
        }
    }
    cout << "So lon nhat: " << max << endl;
    cout << "Tan so xuat hien : " << max_count << endl;
    cout << "So nho nhat: " << min << endl;
    cout << "Tan so xuat hien : " << min_count << endl;
    return 0;
}
