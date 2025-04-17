/**
Tao 1 menu. Menu lap lai toi khi chon chuc nang thoat 
1. Kiem tra hoc luc cua sinh vien
2. Thong tin mang 
3. Tinh tong cac so chia het cho 5 tu 1 - n 
4. Thoat 
Detail chuc nang 1: Nhap diem html5, iti101, mob1014. 
Tinh diem tb voi he so : 2 html5, 2 iti101 va 3 mob104. Kiem tra hoc luc 
Deetail chuc nang 2:
Nhap vao 1 mang so nguyen va thuc hien cac thao tac sau:
1. In danh sach mang so nguyen theo chieu xuoi
2. In danh sach mang so nguyen theo chieu nguoc
3. Tinh tong cac phan tu trong mang
4. Tinh tong cac phan tu o vi tri le ma no chia het cho 3 o trong mang 
5. Kiem tra trong mang co so nguyen duong hay la khong 
6. Liet ke cac vi tri cua phan tu nho nhat trong mang 
7. Tinh tong cua gia tri min va max trong mang 
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
    while(1){
        int chucNang;
        printf("moi ban nhap(1-4):");
        scanf("%d",&chucNang);
        switch(chucNang){
            case 1 :{
                printf("day la chuc nang 1\n");
                float a,b,c;
                printf("moi nhap 3 diem: ");
                scanf("%f %f %f",&a,&b,&c);
                float diemtb = (2*a + 2*b + 3*c)/7;
                if((diemtb<= 10)&&(diemtb>=9)){
                    printf("day la hoc sinh xuat xac\n");
                }else if((diemtb<9)&&(diemtb>=8)){
                    printf("day la hoc sinh gioi\n ");
                }else if((diemtb<8)&&(diemtb>=7)){
                    printf("day la hoc sinh kha\n");
                }else if((diemtb<7)&&(diemtb>=6)){
                    printf("day la hoc sinh tb kha\n");
                }else if((diemtb<6)&&(diemtb>=5)){
                    printf("day la hoc sinh trung binh\n");
                }else{
                    printf("day la hoc sinh yeu\n");
                }
                break;
            }
            case 2 :{
                printf("day la chuc nang 2\n");
                
                int size;
                
                printf("Kich co cua mang: ");
                scanf("%d", &size);
                
                int a[size];
                
                printf("Cac phan tu cua mang: ");
                for (int i = 0; i < size; i++) {
                    scanf("%d", &a[i]);
                }
                
                // // in xuoi 
                // printf("Xuoi: \n");
                // for (int i = 0; i < size; i++) {
                //     printf("%d ", a[i]);    
                // }
                
                // // in nguoc
                // printf("Nguoc: \n");
                // for (int i = size - 1; i >= 0; i--) {
                //     printf("%d ", a[i]);
                // }
                
                // // tinh tong
                // int tong = 0; 
                // for(int i = 0; i < size; i++){
                //     tong = tong + a[i];
                // }
                // printf("\nTong la %d\n",tong); 
                // //tong dk 
                // int tong1 = 0;
                // for(int i = 0; i < size; i++){
                //     if(i %2 != 0 && a[i] %3 == 0){
                //         tong1 = tong1 + a[i];
                //     }
                    
                // }
                // printf("Tong la %d\n",tong1);
                // Kiem tra so nguyen duong 
                // 5: -1 -4 -9 -10 0 = > KHONG CO SO NGUYEN DUONG 
                // bool isCheck = false; // CO SO NGUYEN DUONG 
                // for(int i = 0 ; i < size; i ++){
                //     if(a[i] > 0){
                //         // co nguyen duong 
                //         isCheck = true;
                //         break; // Dung vong lap 
                //     }
                // }
                // // isCheck == true chi can isCheck
                // // isCheck == false hoac !isCheck
                // if(!isCheck){ // isCheck == true
                //     printf("Mang khong co so nguyen duong\n");
                // }else{
                //     printf("Mang co so nguyen duong\n");
                // }
                // Liet ke so nguyen duong dau tien trong mang 
                // 5: -1 -3 9 6 5 => 9 
                // 5: -1 -5 -6 -8 -9 => Khong co 
                // Liet ke cac vi tri cua phan tu nho nhat trong mang 
                // 5: -9 -10 -10 6 -10 => 1,2,4 
                // B1: Tim min 
                int min = a[0]; // gan min cho gia tri cua vt dau 
                for(int i = 1; i < size; i ++){
                    if(min > a[i]){
                        // gan lai min 
                        min = a[i];
                    }
                }
                // B2: Liet ke cac vt 
                printf("Cac vi tri co gia tri nho nhat: ");
                for(int i = 0 ; i < size ;i++){
                    if(a[i] == min){
                        printf("%d\n",i);
                    }
                }
                break;
            }
            case 3 :{
                printf("day la chuc nang 3\n");
                int n;
                int tong=0;
                printf("Moi nhap n:");
                scanf("%d",&n);
                for(int i=0;i<=n;i++){
                    if(i % 5 ==0){
                        tong += i;
                    }
                }
                printf("%d",tong);
                
                break;
            }
            case 4 :{
                printf("thoat");
                exit (0) ; 
            }
            default :{
                printf("ko co chuc nang nay");
                break;
            }
        }
    }
    return 0;
}