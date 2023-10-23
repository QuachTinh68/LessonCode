#include <stdio.h>
int main(){
    int value, hour;
    double salary;
    printf("Nhap so gio lam viec: ");
    scanf("%d", &value);
    printf("Don gia/gio: ");
    scanf("%d", &hour);
    salary = value * hour;
    printf("%.2f", salary);
    return 0;
}
