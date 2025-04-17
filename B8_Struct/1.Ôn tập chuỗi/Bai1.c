
#include <stdio.h>
#include<string.h> 
int main()
{
    // Nhập vào điểm toán, lý, hoá. Tính điểm tb và in ra màn hình
    float toan,ly,hoa,dtb;
    printf("diem toan la :");
    scanf("%f",&toan);
    printf("diem ly la :");
    scanf("%f",&ly);
    printf("diem hoa la :");
    scanf("%f",&hoa);
    dtb=(toan+ly+hoa)/3;
    printf("diem trung binh la %.2f",dtb);
    return 0;
}