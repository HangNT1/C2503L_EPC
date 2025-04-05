#include <stdio.h>

int main()
{
    // B1: Nhap 3 bien canh tam 
    int canhThuNhat;
    int canhThuHai;
    int canhThuBa;
    printf("Moi nhap canh 1:");
    scanf("%d",&canhThuNhat);
    printf("Moi nhap canh 2:");
    scanf("%d",&canhThuHai);
    printf("Moi nhap canh 3:");
    scanf("%d",&canhThuBa);
    // Kiem tra tam giac 
    // Ba cạnh a, b, c của một tam giác phải thỏa mãn điều kiện là tổng hai 
    // cạnh bất kỳ luôn lớn hơn cạnh còn lại. Tức là a+b>c và a+c>b và b+c>a.
    if((canhThuNhat + canhThuHai > canhThuBa) && (canhThuNhat + canhThuBa > canhThuHai) 
        && (canhThuHai + canhThuBa > canhThuNhat)){
            printf("Day la tam giac");
    }else{
        printf("Day khong phai la tam giac");
    }
    return 0;
}