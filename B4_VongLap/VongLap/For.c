#include <stdio.h>

int main(){
    /**
     * 1. Gia tri khoi tao tu luc ban dau 
     * 2. Dieu kien 
     * 3. Buoc nhay tang len may don vi 
     * for(gia tri khoi tao; dieu kien; buoc nhay){
         // lam gi thi lam
     }
     */ 
     // in cac so tu 5 -> 100 
     //for(int i = 5 ; i < 101; i++){
         //printf("%d\n",i);
    //  }
     // In cac so chan tu 0 - n 
     // In cac so le tu 1 - n 
     // In cac so chan va chia het cho 4 tu 0 - n 
     // In cac so le hoac chia het cho 3 tu 0 - n 
    //  int n;
    //  printf("nhap gia tri cua n");
    //  scanf("%d",&n);
    //  for(int i =0;i<n;i++){
    //      printf("%d\n",i);
    //  }
    
    // for(int i = 1; i<n+1; i++){
    //     if(i%2!=0){
    //         printf("%d",i);
    //     }
    // }
    // Tao 1 menu. Menu lap di lap lai khi chon chuc nang thoat 
    // 1. Tinh tong 2 so nguyen 
    // 2. Tinh hieu 2 so nguyen 
    // 3. Thoat
    // Co the ghi while(1/true) => Chay mai mai
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
    }
    return 0;
}