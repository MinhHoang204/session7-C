#include <stdio.h>

int main() {
    int arr[5]; // Khai bao mang so nguyen co 5 phan tu

    // Nhap tung phan tu cua mang
    printf("Nhap 5 so nguyen:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // In mang ra man hinh
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
