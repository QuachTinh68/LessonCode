#include <iostream>
#include <string>
using namespace std;
int main() {
    int K;
    cout << "Nhap vi tri K: ";
    cin >> K;
    int count = 0;
    int i = 1;
    while (count < K) {
        int temp = i;
        int digits = 0;
        // Tính s? ch? s? c?a i
        while (temp != 0) {
            digits++;
            temp /= 10;
        }
        count += digits;
        i++;
    }
    i--;
    count -= to_string(i).length();
    int offset = K - count - 1;
    // Trích xu?t ch? s? th? offset c?a i
    int result = 0;
    int temp = i;
    int digits = 0;
    while (temp != 0) {
        digits++;
        if (digits == offset + 1) {
            result = temp % 10;
            break;
        }
        temp /= 10;
    }
    cout << "So o vi tri thu " << K << " la " << result << endl;
    return 0;
}
