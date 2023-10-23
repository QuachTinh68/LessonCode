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


int main() {
  char dob[11]; 
  printf("Nhap vao sinh nhat cua ban(dd/mm/yyyy): ");
  scanf("%s", dob);
  int yearOfBirth = getYearOfBirth(dob);
  printf("Nam Sinh Cua Ban la: %d\n", yearOfBirth);
  return 0;
}


