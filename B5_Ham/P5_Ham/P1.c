#include <stdio.h>

/**
 * Co 2 loai ham :
 *  - Ham co kieu du lieu tra ve : return 
 *  - Ham khong co kieu du lieu tra ve  => Ham void 
 * 
 * Cu phap viet ham: 
 * kieu du lieu tra ve tenHam(tham so truyen vao cua ham ){
     // code 
     return gia tri;// co the co hoac khong 
 }
 */ 
// void tinhTong(){
    
// }
// int tinhTongC2(){
//     return ...;
// }
// VIET TAT CA CAC HAM TREN HAM INT MAIN()
void tinhTong (int a, int b){
    // int a;
    // int b;
    // printf("Moi nhap:");
    // scanf("%d",&a);
    // printf("Moi nhap:");
    // scanf("%d",&b);
    int tong = a+b;
     printf("Tong la: %d\n",tong);
}
void tinhHieu (int a, int b){
    // int a;
    // int b;
    // printf("Moi nhap:");
    // scanf("%d",&a);
    // printf("Moi nhap:");
    // scanf("%d",&b);
    int tong = a-b;
     printf("Tong la: %d\n",tong);
}
int main()
{
    int a1;
    int b1;
    printf("Moi nhap:");
    scanf("%d",&a1);
    printf("Moi nhap:");
    scanf("%d",&b1);
    tinhTong(a1,b1);
    tinhHieu(a1,b1);
    // Tinh tong hieu tich thuong cua 2 so nguyen nhap tu ban phim 
    // int a;
    // int b;
    // printf("Moi nhap:");
    // scanf("%d",&a);
    // printf("Moi nhap:");
    // scanf("%d",&b);
    // int tong = a+b;
    // int hieu = a-b;
    // int tich = a*b;
    // float thuong = (float)a/b;
    // printf("Tong la: %d\n",tong);
    // printf("Hieu la: %d\n",hieu);
    // printf("tich la: %d\n", tich);
    // printf("thuong la: %f\n",thuong);
    return 0;
}