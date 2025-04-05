#include <stdio.h>

int main()
{
    // Tìm số lớn nhất khi nhập 3 số bất kỳ từ bàn phím.
    // B1: Nhap 3 bien 
    int canhThuNhat;
    int canhThuHai;
    int canhThuBa;
    printf("Moi nhap canh 1:");
    scanf("%d",&canhThuNhat); // 5
    printf("Moi nhap canh 2:");
    scanf("%d",&canhThuHai); // 3
    printf("Moi nhap canh 3:");
    scanf("%d",&canhThuBa); // 7
    // B2: Tim max 
    int max = canhThuHai; // GAN MAX = 1 TRONG 3 GIA TRI (GIA TRI NAO CUNG DUOC)
    // max = 5
    if(max < canhThuNhat){
        max = canhThuNhat; // max = so thu 3
    }
    if(max < canhThuBa){
        max = canhThuBa;
    }
    // tim duoc max 
    printf("Max = %d\n",max);
    // Tim min 
    int min = canhThuBa;
    if(min > canhThuHai){
        min = canhThuHai;
    }
    if(min > canhThuNhat){
        min = canhThuNhat;
    }
    printf("Min %d\n",min);
    return 0;
}