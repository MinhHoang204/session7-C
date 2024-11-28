#include <stdio.h>

int main() {
    // Khai bao va gan gia tri cho mang
    int arr[5] = {12, 45, 7, 34, 22}; // Mang co 5 phan tu
    int max = arr[0]; // Khoi tao gia tri lon nhat la phan tu dau tien
    int min = arr[0]; // Khoi tao gia tri nho nhat la phan tu dau tien

    // Tim phan tu lon nhat va nho nhat
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // In ket qua
    printf("Phan tu lon nhat trong mang la: %d\n", max);
    printf("Phan tu nho nhat trong mang la: %d\n", min);

    return 0;
}

