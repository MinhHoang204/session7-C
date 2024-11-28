#include <stdio.h>

int main() {
    // Khai bao va gan gia tri cho mang
    int arr[5] = {1, 2, 3, 4, 5}; // Mang ban dau
    int n = 5; // So phan tu trong mang

    // Thay doi mang: so le tang 2 don vi, so chan tang 3 don vi
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) { // Neu la so chan
            arr[i] += 3;
        } else { // Neu la so le
            arr[i] += 2;
        }
    }

    // In mang sau khi thay doi
    printf("Mang sau khi thay doi:\n[");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}

