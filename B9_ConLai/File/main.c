#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *f;

    // Ghi dữ liệu vào file
    f = fopen("data.txt", "w");  // Mở file ở chế độ ghi
    if (f == NULL) {
        printf("Lỗi mở file để ghi!\n");
        return 1;
    }

    fprintf(f, "Dong thu 1\n");
    fprintf(f, "Dong thu 2\n");
    fprintf(f, "Xin chao file trong C!\n");
    fclose(f); // Đóng file sau khi ghi

    // Đọc dữ liệu từ file
    f = fopen("data.txt", "r");  // Mở lại file ở chế độ đọc
    if (f == NULL) {
        printf("Lỗi mở file để đọc!\n");
        return 1;
    }

    char line[100];
    printf("Noi dung trong file:\n");
    while (fgets(line, sizeof(line), f)) {
        printf("%s", line); // In từng dòng ra màn hình
    }

    fclose(f); // Đóng file sau khi đọc
    return 0;
}
