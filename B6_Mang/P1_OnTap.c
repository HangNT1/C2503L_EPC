#include <stdio.h>
#include <stdlib.h>
int main()
{
    /**
     * Tao 1 menu gom cac chuc nang sau. Chuc nang lap lai toi khi chon chuc nang thoat 
     *    A. Tính tổng của 2 số nguyên nhập từ bàn phim
     *    B. Tính tổng của các số chia hết cho 5 và là số chẵn từ 1 - n
     *    C. Tính tích của các số chia hết cho 3 và 2 từ 1 - n 
     *    D. Liệt kê các số chia hết cho 3 hoặc là số lẻ từ 1 - n 
     *    F. Kiểm tra học lưc khi biết điẻm toán lý hoá. 
     *    G. Thoát
     */

    while(1){
        char menu;
        printf("\nMoi nhap vao menu:");
        scanf("%c",&menu);
      
        switch(menu){
            case 'A':{
                printf("Day la chuc nang 1\nguyên");
                break;
            }
            case 'B':{
                printf("Day la chuc nang 3\n");
                // for(i = 1->n){
                //     if(i%5==0 && i %2 == 0){
                //         // tinh tong
                //     }
                // }
                int n;
                fflush(stdin);
                printf("moinhap");
                scanf("%d",&n);
                int tong = 0 ;
                for(int i = 0; i < n + 1;i++){
                    if(i % 2 ==0 && i % 5 ==0){
                        tong = tong + i;
                    }
                }
                printf("%d",tong);
                
                break;
            }
            case 'C':{
                printf("Day la chuc nang 4\n");
                break;
            }
            case 'D':{
                printf("Day la chuc nang 5");
                break;
            }
            case 'F':{
                printf("Day la chuc nang 6");
                break;
            }
            case 'G':{
                printf("Day la chuc nang thoat");
                exit(0);
            }
            default:{
                printf("Truong hop khong ton tai\n");
                break;
             }
        }
    }
    return 0;
}