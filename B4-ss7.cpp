#include <stdio.h>

int main() {
    int n; // So phan tu cua mang
    int *arr; // Con tro de luu mang dong

    // Yeu cau nguoi dung nhap so phan tu
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    // Cap phat bo nho dong cho mang
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Khong the cap phat bo nho.\n");
        return 1;
    }

    // Nhap cac phan tu cua mang
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // In cac phan tu cua mang
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // Giai phong bo nho da cap phat
    free(arr);

    return 0;
}
