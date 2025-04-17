#include <stdio.h>

int main()
{
    // Nhập vào mssv, địa chỉ, ngành học và in ra màn hình
    // char mssv[10] char diaChi[100] char nganhHoc[50]
    char mssv[10],diaChi[100],nganhHoc[50];
    printf("moi nhap mssv: ");
    gets(mssv); // Hoang Kim Chi 
    printf("moi nhap dia chi: ");
    gets(diaChi);
    printf("moi nhap nganh hoc: ");
    gets(nganhHoc);
    printf("ma so sinh vien : %s\n",mssv);
    printf("dia chi la: %s\n",diaChi);
    printf("nganh hoc la: %s\n",nganhHoc);
    return 0;
}