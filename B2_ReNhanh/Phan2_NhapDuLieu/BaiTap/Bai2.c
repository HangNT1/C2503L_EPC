#include <stdio.h>

int main()
{
    // B1: Nhap vao nam sinh 
    int namSinh; // chua co gia tri => fake => lay gia tri bua 
    printf("Moi ban nhap vao nam sinh:");
    scanf("%d",&namSinh);
    // B2: In ra tuoi 
    int tuoi = 2025 - namSinh;
    printf("Tuoi la: %d",tuoi);
    // tinh tong 2 so nguyen nhap tu ban phim 
    int numberOne;
    int numberTwo;
    printf("Moi nhap vao so thu nhat");
    scanf("%d",&numberOne);
    printf("Moi nhap vao so thu hai");
    scanf("%d",&numberTwo);
    int tong = numberOne + numberTwo;
    printf("Tong = %d",tong);
    return 0;
}