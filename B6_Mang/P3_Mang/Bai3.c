// 1. Nhap vao mang so nguyen gom n phan tu . In cac phan tu trong mang ra man hinh 
// 2. Nhap vao mang so thuc gom n phan tu . In cac phan tu trong mang ra man hinh 
// 3. Nhap vao mang so nguyen gom n phan tu . Tinh tong cac phan tu trong mang
// 4. Nhap vao mang so nguyen gom n phan tu . Tinh tong cac phan tu o vi tri le trong mang
#include <stdio.h>

int main()
{
    double arr[100];
    int size;
    printf("moinhap");
    scanf("%d",&size);
    for(int i = 0; i < size ; i++){
        scanf("%lf",&arr[i]);
    }
    printf("nhap");
    for(int i = 0; i < size;i++){
        printf("%lf",arr[i]);
    }

    return 0;
}