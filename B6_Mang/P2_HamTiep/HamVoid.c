 // Tao 1 menu, menu lap lai toi khi chon chuc nang thoat 
// 1. Tinh tong cac so tu 1 - n 
// 2. Liet ke cac so tu 1 - n.
// 3. Thoat 
#include <stdio.h>
// Tach void => Khong ts truyen vao 
// Tach voi => Truyen ts => nen truyen thang nao nhap tu ban phim 
void chucNang1(int n){
    printf("day la case 1");
    int tong=0;
    for(int i = 1;i< n+1;i++){
        tong += i;
    }
    printf("tong cua cac so la %d\n",tong);
}
void chucNang2(int n){
    for(int i = 0; i < n + 1; i++){
        printf("%d",i);
    }
}
int main()
{
    while(1){
        int mende;
        printf("Chuc nang 1\nChuc nang 2\nChuc nang3\n");
        printf("moi ban nhap menu");
        scanf("%d",&mende);
        switch(mende){
            case 1 :{
                int number;
                printf("Moi nhap vao number:");
                scanf("%d",&number);
                chucNang1(number);
                break;
            }
            case 2 :{
                int number;
                printf("Moi nhap vao number:");
                scanf("%d",&number);
                chucNang2(number);
                break;
            }
            case 3 :{
                printf("day la case 3");
                break;
            }
            default:{
                printf("khong co chua nang ban chon");
            }
        }
    }

    return 0;
}