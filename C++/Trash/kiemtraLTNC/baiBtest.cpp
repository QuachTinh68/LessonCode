#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Hàm ð? so sánh nãm sinh c?a hai ngý?i
int compareByYearOfBirth(char* dob1, char* dob2) {
  int yearOfBirth1 = atoi(dob1+6);
  int yearOfBirth2 = atoi(dob2+6);
  return yearOfBirth1 - yearOfBirth2;
}

int main() {
  // Khai báo m?ng ð? lýu tr? thông tin c?a nhi?u ngý?i
  char names[50][50];
  char dobs[50][11];
  int n;
  printf("Enter the number of people: ");
  scanf("%d", &n);
  printf("Enter the names and dates of birth of %d people:\n", n);

  // Nh?p tên và ngày sinh c?a m?i ngý?i vào m?ng
  for (int i = 0; i < n; i++) {
    printf("Person %d:\n", i+1);
    printf("Name: ");
    scanf("%s", names[i]);
    printf("Date of birth (dd/mm/yyyy): ");
    scanf("%s", dobs[i]);
  }

  // S?p x?p danh sách theo th? t? tãng d?n c?a nãm sinh
  for (int i = 0; i < n-1; i++) {
    for (int j = i+1; j < n; j++) {
      if (compareByYearOfBirth(dobs[i], dobs[j]) > 0) {
        // Hoán ð?i v? trí c?a hai ngý?i
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

  // In danh sách ð? s?p x?p ra màn h?nh
  printf("\nSorted list of people by year of birth:\n");
  for (int i = 0; i < n; i++) {
    printf("%s - %s\n", names[i], dobs[i]);
  }

  return 0;
}
