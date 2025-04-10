/**
 * Tao 1 menu gom cac chuc nang sau. Menu lap lai toi khi chon chuc nang thoat 
 * 1. Kiem tra so chan 
 * 2. Liet ke cac so chan va chia het cho 5 tu 1 - n 
 * 3. Kiem tra thang trong nam khi nhap vao 1 so nguyen
 * 4. Thoat
 */
 #include<stdio.h>
 #include <stdlib.h>
 int main(){
    while(1){
        int chon;
        printf("nenu\n");
        printf("bai1\n");
        printf("bai2\n");
        printf("bai3\n");
        printf("bai4\n");
        printf("thoat\n");
        printf("chon");
        scanf("%d",&chon);
        switch(chon){
            case 1:{
                int nhap;
                printf("nhap vao so\n");
                 scanf("%d",&nhap);
                if(nhap % 2==0){
                     printf("la so chan");
                }else{
                     printf("khong hop le");
                 }
                 break;
            }
            case 2:{
                 printf("bai2\n");
                 break;
            }
            case 3:{
             break;
            }
        }
     }
     return 0;
 }