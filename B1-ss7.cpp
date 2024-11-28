#include <stdio.h>

int main() {
    // Khai bao va gan gia tri cho mang
    int arr[] = {1, 2, 3, 4, 5}; // Mang gom 5 phan tu
    int length = sizeof(arr) / sizeof(arr[0]); // Tinh do dai cua mang

    // In do dai cua mang
    printf("Do dai cua mang: %d\n", length);

    // In tung phan tu trong mang
    printf("Cac phan tu trong mang:\n");
    for (int i = 0; i < length; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
