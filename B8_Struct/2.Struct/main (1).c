#include <stdio.h>
typedef struct {
    char ten[100];
    int tuoi;
    float dtb;
} Student;
int main()
{
    // mang cua struct SinhVien 
    // printf("Moi nhap so luong phan tu trong mang:")
    Student danhSachSV[2];
    for(int i = 0 ; i < 2 ;i ++){
        printf("moi nhap ten: ");
        gets(danhSachSV[i].ten);
        printf("moi nhap tuoi: ");
        scanf("%d",&danhSachSV[i].tuoi);
        printf("moi nhap diem trung binh: ");
        scanf("%f",&danhSachSV[i].dtb);
        getchar();
    }
    // in ra 
     for(int i = 0 ; i < 2 ;i ++){
        printf("ten: %s\n",danhSachSV[i].ten);
        printf("tuoi: %d\n",danhSachSV[i].tuoi);
        printf("diem trung binh: %f\n",danhSachSV[i].dtb);
    }
    return 0;
}
