// 3. Nhap vao mang so nguyen gom n phan tu . Tinh tong cac phan tu trong mang
// 4. Nhap vao mang so nguyen gom n phan tu . Tinh tong cac phan tu o vi tri le trong mang
#include <stdio.h>

int main()
{
    int arr[100];
    int size;
    int tong=0;
    printf("moi ban nhap ");
    scanf("%d",&size);
    for(int i = 0;i< size;i++){
        scanf("%d",&arr[i]);
    }
    printf("cac phan tu vua nhap vao \n");
    for(int i=0;i<size;i++){
       if(arr[i] % 2 !=0){ // vi tri : arr[i]
           tong = tong + arr[i]; 
       }
    }
    printf("%d",tong);

    return 0;
}