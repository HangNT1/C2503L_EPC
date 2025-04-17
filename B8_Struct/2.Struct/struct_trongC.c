#include <stdio.h>

struct SinhVien{
    char mssv1[50];
    char name[100];
    int tuoi;
    float diem;
    // Liet ke cac thuoc tinh cua doi tuong
};
typedef struct {
    char maLop[50];
    float dienTich;
}LopHoc; 
// typedef => ten doi tuong truyen dang sau

int main()
{
    // Struct => La 1 tap hop gom nhieu truong du lieu (structure)
    // La kieu du lieu co cau truc gom nhieu truong du lieu 
    // CO THE KHAI BAO TREN HOAC DUOI MAIN
    // struct tenBien {
    //     kieu du lieu1 tenBien1;
    //     kieu du lieu2 tenBien2;
    // };
    // Object -> doi tuong 
    // int number;
    // struct SinhVien sv;
    // SV: mssv, ten, tuoi, diem 
    // Nhap tt cua doi tuong Sv va in ra man hinh 
    // printf("Moi nhap mssv:");
    // gets(sv.mssv1);
    // printf("Moi nhap ten:");
    // gets(sv.name);
    // copy: strspy 
    // strcpy(sv.mssv1, "HE130465");
    // strcpy(sv.name,"Nguyen Van A");
    // printf("Moi nhap tuoi:");
    // scanf("%d",&sv.tuoi);
    // printf("Moi nhap diem:");
    // scanf("%f",&sv.diem);
    // in ra 
    // printf("Ten = %s , MSSV = %s, Tuoi = %d, Diem = %f\n",sv.name, sv.mssv1, sv.tuoi, sv.diem);
    struct SinhVien sv2 = {"Ma01","Nguyen Van A",10, 8.8};
    // printf("Ten = %s , MSSV = %s, Tuoi = %d, Diem = %f\n",sv11.name, sv11.mssv1, sv11.tuoi, sv11.diem);
    LopHoc lh = {"LH01",10.5};
    printf("Ma la: %s - Dien tich: %f\n", lh.maLop, lh.dienTich);
    // ham : ()
    // mang : []
    // object: {}
    struct SinhVien{
        char mssv1[50];
        char name[100];
        int tuoi;
        float diem;
    }sv11 = {"Ma011","Nguyen Van A",10, 8.8},
    sv12={"Ma012","Nguyen Van B", 11, 9.9};
    printf("Ten = %s , MSSV = %s, Tuoi = %d, Diem = %f\n",sv12.name, sv12.mssv1, sv12.tuoi, sv12.diem);

    // Liet ke cac thuoc tinh cua doi tuong
// };
    return 0;
}
