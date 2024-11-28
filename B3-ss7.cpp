#include <stdio.h>

int main() {
    // Khai bao va gan gia tri cho mang
    int arr[5] = {1, 3, 5, 7, 9}; // Mang mau, ban co the thay doi gia tri
    int hasEven = 0; // Co kiem tra co so chan trong mang hay khong

    // In cac phan tu la so chan
    printf("Cac phan tu la so chan trong mang:\n");
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            hasEven = 1; // Danh dau rang co so chan
        }
    }

    // Neu khong co so chan, in thong bao
    if (!hasEven) {
        printf("Mang khong chua so chan.\n");
    }

    return 0;
}
