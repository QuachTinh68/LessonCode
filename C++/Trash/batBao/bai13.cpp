#include <stdio.h>

int main() {
    int n, y, w, d;
    printf("Nhap so ngay: ");
    scanf("%d", &n);
    y = n / 365;
    w = (n % 365) / 7;
    d = (n % 365) % 7;
    printf("Year: %d\n", y);
    printf("Weeks: %d\n", w);
    printf("Days: %d\n", d);
    return 0;
}
