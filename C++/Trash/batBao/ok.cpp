#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Nhap kich thuoc mang: ");
    scanf("%d", &n);

    int* arr = (int*) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Khong the cap phat bo nho\n");
        exit(1);
    }

    printf("Nhap cac gia tri cua mang: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    char filename[100];
    printf("Nhap ten file de ghi ket qua: ");
    scanf("%s", filename);

    FILE* fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Khong the mo file\n");
        exit(1);
    }

    printf("Cac gia tri trong mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        fprintf(fp, "%d ", arr[i]);
    }

    fclose(fp);
    free(arr);
    return 0;
}
