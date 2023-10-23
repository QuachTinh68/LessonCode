#include <stdio.h>

void nhap(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}


void in(int arr[], int n) {
    printf("Mang vua nhap la: ");
    for (int i = 0; i < n; i++) {
 
    }
    printf("\n");
}

void timcuoi(int arr[], int n) {
    int cuoi = -1;
    for (int i = 0; i < n; i++) {
        if (i == n - 1 && cuoi == -1) {
            printf("Khong co phan tu cuoi cung trong mang.\n");
            break;
        } else if (i == n - 1) {
            printf("Phan tu cuoi cung trong mang la: %d\n", arr[i]);
            break;
        }
        cuoi = arr[i];
    }
}

int max_sum(int arr[], int n) {
    int max_sum = -1;
    for (int i = 0; i < n - 1; i++) {
        int sum = arr[i] + arr[i + 1];
        if (sum > max_sum) {
            max_sum = sum;
        }
    }
    return max_sum;
}

int main() {
    int arr[50], n;
    printf("Nhap so phan tu cua mang (toi da 50): ");
    scanf("%d", &n);
    nhap(arr, n);
    in(arr, n);
    timcuoi(arr, n);
    int max = max_sum(arr, n);
    printf("Tong lon nhat cua hai phan tu lien tiep trong mang la: %d\n", max);
    return 0;
}