#include <stdio.h>
 // kiểu trả về tên hàm (tham so truyền vao 1 ham){
    //     return ...; // co the co
    // }
// Ham viết trên main
void tinhTong(int soThuNhat, int soThuHai){
    printf("Tong = %d\n", soThuNhat + soThuHai);
}
// Ham tra ve => return 
int tinhTong1(int a,b){
    // TAO RA 1 BIEN CO KIEU DU LIEU TRUNG VOI KIEU TRA VE CUA HAM VA RETURN BIEN DAY 
    int sum = 0;
    sum = a + b;
    return sum;
}
float tinhDiemTrungBinh(int a, int b, int c){
    float dtb = 0.0;
    // code 
    dtb = (a+b+c)/3;
    return dtb;
}
// B1 => void khong truyen tham so => void co gang truyen tham so 
// B2 => Ham tra ve 
int main(){
    // Ham void => khong co kieu tra ve 
    // Ham có kiểu dữ liệu trả về => bắt buộc có return 
    // Tinh tong của 2 số nguyên 
    int a,b;
    printf("Moi nhap so 1:");
    scanf("%d",&a);
    printf("Moi nhap so 2:");
    scanf("%d",&b);
    // tinhTong(a,b);
    // Tinh diem tb : toan ly hoa 
    // Ham tra ve 
    int goiHamTinhTong = tinhTong1(a,b); // COI NHU 1 BIEN BINH THUONG 
    printf("%d",goiHamTinhTong);
    // Tao 1 menu, menu lap lai toi khi chon chuc nang thoat 
    // 1. Tinh tong cac so tu 1 - n 
    // 2. Liet ke cac so tu 1 - n.
    // 3. Thoat 
    return 0;
}