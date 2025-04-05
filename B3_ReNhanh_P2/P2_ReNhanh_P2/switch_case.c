#include <stdio.h>

int main()
{
    // 1. re nhanh - switch.. case 
    /**
     * Cu phap: bien truyen trong switch chi chap nhan 1 trong 2 loai kieu du lieu: so/ki tu 
     * switch(ten bien){
         // moi truong hop la 1 case 
         case gia tri:{
             // lam gi thi lam 
             break;
         }
         // so luong case (truong hop) => Khong gioi han 
         default:{
            // TH con lai 
            break;
         }
     }
     - KET THUC CUA SWITCH: LUON LUON PHAI LA DEFAULT 
     - KET THUC CUA CASE: LUON LUON LA BREAK;
     */ 
     // Nhap vao 1 so. Kiem tra so nay la thang may trong nam.
     // Nhap vao 1 so. Kiem tra so nay thuoc quy nao trong nam 
     // 1 nam 4 quy:
     // Quy 1: Thang 1,2,3 
     // Quy 2: Thang 4,5,6 
     // Quy 3: 789 
     // Quy 4: 10, 11, 12
    // int thang;
    // printf("nhap vao thang trong nam:");
    // scanf("%d",&thang);
    // //12 thang, 1 TH sai 
    // switch(thang){
    //     // Liet ke cac truong :
    //     case 1: case 2: case 3:{
    //         printf("Day la quy 1");
    //         break;
    //     }
        // liet ke 12 case 
        // case 2:{
        //     printf("day la quy 1");
        //     break;
        // }
        // case 3:{
        //     printf("day la quy 1 ");
        //     break;
        // }
        // case 4: case 5: case 6:{
        //     printf("day la quy 2");
        //     break;
        // }
        // case 7: case 8: case 9:{
        //     printf("day la quy 3");
        //     break;
        // }
        // // tu liet ke not
        // default:{
        //     // TH con lai 
        //     printf("Day khong phai thang trong nam");
        //     break;
        // }
        // %2 == 0 => chan 
        // 4 6 8 
        // swtich case => gia tri cu the <=> if (==)
        // if.. else: thuong dung vs cac bai toan : co khoang dieu kien 
        
        // Tạo 1 menu gồm các chức năng sau:
        // 	   1 Tính tổng của 2 số nguyên nhập từ bàn phím
        //     2 Tính hiệu của 2 số nguyên nhập từ bàn phím 
        //     0 Thoát
        
        // B1: Nhap menu 
        int menu;
        printf("Moi nhap menu:");
        scanf("%d",&menu);
        switch(menu){
            case 1:{
                // tinh tong 
                printf("Day la case 1");
                int a,b;
                printf("Moi nhap so 1:");
                scanf("%d",&a);
                printf("Moi nhap so 2:");
                scanf("%d",&b);
                printf("Tong = %d",a+b);
                break;
            }
            case 2:{
                // tinh hieu 
                printf("Day la case 2");
                break;
            }
            case 0:{
                printf("Day la case 0 va ban dang chon thoat chuong trinh");
                break;
            }
            default:{
                printf("Chuc nang khong ton tai");
                break;
            }
        }
    
    return 0;
}