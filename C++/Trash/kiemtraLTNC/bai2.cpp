#include <stdio.h>
#include <ctype.h>

void nhapChuoi(char chuoi[], int doDaiMax) {
  int i = 0;
  char c = getchar();
  while (c != '\n' && i < doDaiMax - 1) {
    chuoi[i] = c;
    i++;
    c = getchar();
  }
  chuoi[i] = '\0';
}
void demKiTu(char* chuoi, int* soChuCai, int* soChuSo, int* soKiTuKhac) {
  *soChuCai = 0;
  *soChuSo = 0;
  *soKiTuKhac = 0;
  for (int i = 0; chuoi[i] != '\0'; i++) {
    if (isalpha(chuoi[i])) {
      (*soChuCai)++;
    } else if (isdigit(chuoi[i])) {
      (*soChuSo)++;
    } else {
      (*soKiTuKhac)++;
    }
  }
}

int main() {
  char chuoi[100];
  int soChuCai, soChuSo, soKiTuKhac;
  printf("Nhap vao mot chuoi: ");
  nhapChuoi(chuoi,100);
  demKiTu(chuoi, &soChuCai, &soChuSo, &soKiTuKhac);
  printf("So chu cai: %d\n", soChuCai);
  printf("So chu so: %d\n", soChuSo);
  printf("So cac ky tu khac: %d\n", soKiTuKhac);
  return 0;
}
