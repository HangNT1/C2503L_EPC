/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    while(1){
        // Tao menu 
        int chon;
        // in memnu 
        printf("1. Tinh tong\n");
        printf("2. Tinh hieu\n");
        printf("3. Thoat\n");
        printf("Moi nhap:");
        scanf("%d",&chon);
        switch(chon){
            case 1:{
                printf("Chuc nang 1\n");
                break;
            }
            case 2:{
                printf("Chuc nang 2\n");
                break;
            }
            case 3:{
                printf("Thoat\n");
                // break; 
                // CASE THOAT: KHONG DE EXIT
                exit(0);
            }
            default:{
                printf("Chuc nang khong ton tai\n");
                break;
            }
        }

    return 0;
}