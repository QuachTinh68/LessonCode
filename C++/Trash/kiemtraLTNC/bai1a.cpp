#include <stdio.h>
int xuatNamSinh(char *NgaySinh) {
  int y = 0;
  int i;
  for (i = 6; i <= 9; i++) {
    y = y * 10 + (NgaySinh[i] - '0');
  }
  return y;
}
int main() {
  char NgaySinh[11];
  int NamSinh;
  printf("Nhap ngay sinh cua ban  (dd/mm/yyyy): ");
  scanf("%s", NgaySinh);
 NamSinh = xuatNamSinh(NgaySinh);
  printf("Nam sinh cua ban la: %d\n", NamSinh);
  return 0;
}
