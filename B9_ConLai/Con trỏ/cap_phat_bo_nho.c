#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n = 3;

    // Cấp phát bộ nhớ ban đầu cho 3 phần tử
    arr = (int*) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Cap phat bo nho that bai!\n");
        return 1;
    }

    // Nhập 3 giá trị đầu tiên
    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Giả sử cần thêm 2 phần tử nữa
    int newSize = 5;
    int *temp = realloc(arr, newSize * sizeof(int));
    if (temp == NULL) {
        printf("Realloc that bai!\n");
        free(arr);
        return 1;
    }
    arr = temp; // gán lại vùng nhớ mới

    // Nhập thêm phần tử mới
    printf("Nhap %d phan tu moi:\n", newSize - n);
    for (int i = n; i < newSize; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // In toàn bộ mảng
    printf("Mang sau khi mo rong:\n");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }

    // Giải phóng bộ nhớ
    free(arr);
    return 0;
}
