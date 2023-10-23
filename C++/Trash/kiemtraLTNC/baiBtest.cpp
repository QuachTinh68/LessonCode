#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// H�m �? so s�nh n�m sinh c?a hai ng�?i
int compareByYearOfBirth(char* dob1, char* dob2) {
  int yearOfBirth1 = atoi(dob1+6);
  int yearOfBirth2 = atoi(dob2+6);
  return yearOfBirth1 - yearOfBirth2;
}

int main() {
  // Khai b�o m?ng �? l�u tr? th�ng tin c?a nhi?u ng�?i
  char names[50][50];
  char dobs[50][11];
  int n;
  printf("Enter the number of people: ");
  scanf("%d", &n);
  printf("Enter the names and dates of birth of %d people:\n", n);

  // Nh?p t�n v� ng�y sinh c?a m?i ng�?i v�o m?ng
  for (int i = 0; i < n; i++) {
    printf("Person %d:\n", i+1);
    printf("Name: ");
    scanf("%s", names[i]);
    printf("Date of birth (dd/mm/yyyy): ");
    scanf("%s", dobs[i]);
  }

  // S?p x?p danh s�ch theo th? t? t�ng d?n c?a n�m sinh
  for (int i = 0; i < n-1; i++) {
    for (int j = i+1; j < n; j++) {
      if (compareByYearOfBirth(dobs[i], dobs[j]) > 0) {
        // Ho�n �?i v? tr� c?a hai ng�?i
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

  // In danh s�ch �? s?p x?p ra m�n h?nh
  printf("\nSorted list of people by year of birth:\n");
  for (int i = 0; i < n; i++) {
    printf("%s - %s\n", names[i], dobs[i]);
  }

  return 0;
}
