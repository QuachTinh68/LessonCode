#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getYearOfBirth(char* dateOfBirth);

int getYearOfBirth(char* dateOfBirth) {
  char yearStr[5];
  strncpy(yearStr, dateOfBirth+6, 4);
  yearStr[4] = '\0';

  int yearOfBirth = atoi(yearStr);
  return yearOfBirth;
}

int compareByYearOfBirth(char* dob1, char* dob2) {
  int yearOfBirth1 = atoi(dob1+6);
  int yearOfBirth2 = atoi(dob2+6);
  return yearOfBirth1 - yearOfBirth2;
}

int main() {
 
  char names[50][50];
  char dobs[50][11];
  int n;
  printf("Nhap so nguoi can sap xep: ");
  scanf("%d", &n);
  printf("Nhap ten va ngay sinh %d nguoi:\n", n);

  // Nh?p tên và ngày sinh c?a m?i ngý?i vào m?ng
  for (int i = 0; i < n; i++) {
    printf("Nguoi thu  %d:\n", i+1);
    printf("Ho va ten: ");
    scanf("%s", names[i]);
    printf("Ngay Sinh Nhat  (dd/mm/yyyy): ");
    scanf("%s", dobs[i]);
  }
  
  for (int i = 0; i < n-1; i++) {
    for (int j = i+1; j < n; j++) {
      if (compareByYearOfBirth(dobs[i], dobs[j]) > 0) {
        char tempName[50];
        char tempDob[11];
        strcpy(tempName, names[i]);
        strcpy(tempDob, dobs[i]);
        strcpy(names[i], names[j]);
        strcpy(dobs[i], dobs[j]);
        strcpy(names[j], tempName);
        strcpy(dobs[j], tempDob);
      }
    }
  }

  printf("\nSap xep ho te theo thu tu tang dan:\n");
  for (int i = 0; i < n; i++) {
    printf("%s - %s\n", names[i], dobs[i]);
  }
  return 0;
}
