#include <stdio.h>
#include <math.h> // tinh can - sqrt, luy thua - pow

int main()
{
    // // int i = 0 ;
    // // printf("Before: %d\n",i);
    // // int i = 0; // Toan cuc => Moi noi deu goi duoc
    // for(int i = 0; i < 10;i++){ // i : cuc bo => CHI CO GIA TRI TRONG FOR
    //     printf("%d\n",i);
    // }
    // printf("Vong lap so 2");
    // for(int i = 0; i < 100;i++){ // i : cuc bo => CHI CO GIA TRI TRONG FOR
    //     printf("%d\n",i);
    // }
    // // printf("Sau vong lap: %d\n",i);
    int number;
    printf("Nhap menu:");
    scanf("%d",&number);
    switch(number){
        case 1:{
            printf("Case 1\n");
            int a = 5;
            printf("%d\n",a);
            break;
        }
        case 2:{
            printf("Case 2\n");
            int a = 7;
            printf("%d\n",a);
            break;
        }
        case 3:{
            printf("Case 3\n");
            break;
        }
        case 4:{
            break;
        }
        default:{
            printf("TH con lai\n");
            break;
        }
    }
    return 0;
}