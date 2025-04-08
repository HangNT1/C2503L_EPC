#include <stdio.h>

int main()
{
    /**
     * Tao 1 menu gom cac chuc nang sau:
     *   1. Tinh tong,hieu,tich, thuong 2 so nguyen nhap tu ban phim
     *   2. Kiem tra thang trong nam khi nhap vao 1 so 
     *   3. Kiem tra hoc luc khi biet diem toan , ly, hoa nhap tu ban phim 
     *   0. Thoat
     * 
     * Detail chuc nang 3: Nhap vao diem toan , ly hoa. Tinh diem trung binh.
     * Kiem tra:
     * Neu diem tb trong khoang 9 -> 10: SV XX
     * Dtb trong >=8 => SVG 
     * DTB >=7 va < 8  => SVK 
     * DTB >=6 & < 7 => SV TB kha 
     * DTB >= 5 & < 6 => SV TB 
     * DTB <5 : SVY
     */
    printf("1. Chuc nang 1\n");
    printf("2. Chuc nang 2\n");
    printf("3. Chuc nang 3\n");
    printf("0. Chuc nang 0\n");
    int luachon;
    printf("nhap vao:");
    scanf("%d", &luachon);
    switch (luachon) {
        case 1:{
            printf("day la chuc nang 1\n");
            int num1;
            int num2;
            printf("Nhap so thu nhat: ");
            scanf("%d",&num1);
            printf("Nhap so thu hai: ");
            scanf("%d",&num2);
            printf("Tong = %d\n",num1+num2);
            printf("Hieu = %d\n",num1-num2);
            printf("Tich = %d\n",num1*num2);
            printf("Thong = %.2f\n",(float)num1/num2);
            break;
        }
        case 2:{
            printf("day la chuc nang 2\n");
            break;
        }
        case 3:{
            printf("day la chuc nang 3\n");
            float toan,ly,hoa;
            printf("nhap vao diem toan ");
            scanf("%f",&toan);
            printf("nhap vao diem ly: ");
            scanf("%f",&ly);
            printf("nhap vao diem hoa: ");
            scanf("%f",&hoa);
            float diemtb =(toan+ly+hoa)/3;
            if(diemtb>=9 && diemtb<=10){
                printf("sinh vien xuat xac");
            }else if(diemtb>=8 && diemtb<9){
                printf("sinh vien gioi");
            }else if(diemtb>=7 && diemtb<8){
                printf("sinh vien kha");
            }else if(diemtb>=6 && diemtb<7){
                printf("sinh vien tb kha");
            }else if(diemtb>=5 && diemtb<6){
                printf("sinh vien tb");
            }else{
                printf("sinh vien yeu");
            }
            break;
        }
        case 4:{
            printf("thoat ");
            break;
        }
        default:
    }
    return 0;
}