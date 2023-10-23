#include <stdio.h>
#include <string.h>

int getYearOfBirth(char *dateOfBirth) {
  int y = 0;
  int i;
  for (i = 6; i <= 9; i++) {
    y = y * 10 + (dateOfBirth[i] - '0');
  }
  return y;
}

void sortList(char nameList[50][30], char dobList[50][11], int numPeople) {
  int i, j;
  char tempName[30];
  char tempDOB[11];
  int yearOfBirth1, yearOfBirth2;
  for (i = 0; i < numPeople - 1; i++) {
    for (j = 0; j < numPeople - i - 1; j++) {
      yearOfBirth1 = getYearOfBirth(dobList[j]);
      yearOfBirth2 = getYearOfBirth(dobList[j+1]);
      if (yearOfBirth1 > yearOfBirth2) {
        strcpy(tempName, nameList[j]);
        strcpy(tempDOB, dobList[j]);
        strcpy(nameList[j], nameList[j+1]);
        strcpy(dobList[j], dobList[j+1]);
        strcpy(nameList[j+1], tempName);
        strcpy(dobList[j+1], tempDOB);
      }
    }
  }
}

int main() {
  char namList[50][30];
  char dobList[50][11];
  int NumPeople;
  printf("Nhap so nguoi: ");
  scanf("%d", &NumPeople);
  for (int i = 0; i < NumPeople; i++) {
    printf("Nhap ten nguoi thu %d: ", i+1);
    scanf("%s", namList[i]);
    printf("Nhap ngay sinh cua %s (dd/mm/yyyy): ", namList[i]);
    scanf("%s", dobList[i]);
  }
  sortList(namList, dobList, NumPeople);
  printf("Danh sach sau khi sap xep la:\n");
  for (int i = 0; i < NumPeople; i++) {
    printf("%s - %s\n", namList[i], dobList[i]);
  }
  return 0;
}
