#include <bits/stdc++.h>
using namespace std;
int main() {
    int num, sum = 0, count = 0;
    double avg;
    while (sum <= 2011) {
        cin >> num;
        sum += num;
        if (num % 2 == 1) {
            count++;
        }
    }

    if (count > 0) {
        avg = (double)(sum - num) / count;
        cout << "Trung binh cong cac so le: " << avg << endl;
    } else {
        cout << "Khong co so le trong day." << endl;
    }
    return 0;
}
