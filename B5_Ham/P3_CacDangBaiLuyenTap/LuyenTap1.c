#include <stdio.h>

int main()
{
    /**
     * 1. Tinh tong cua cac so tu 1 -> 10 
     * 2. Tinh tich cua cac so tu 1 -> 10 
     * 3. Tinh tong cua cac so tu 1 -> n 
     * 4. Tinh tich cua cac so tu 1 -> n 
     * 5. Tinh tong cua cac so chia het cho 5 tu 1 -> n 
     * 6. Tinh tich cua cac so chia het cho 3 hoac la so le tu 1 -> n 
     * 7. Liet ke cac so chia het cho 2 hoac chia het cho 5 tu 1 ->n 
     * 8. Tinh tong cac so nghich dao tu 1 ->n 
     */ 
    // int tong = 0;
    // for(int i = 0; i < 11 ; i ++){
    //     // printf("%d\n", i);
    //     tong = tong + i;
    // }
    // printf("Tong la %d\n",tong);
    // Vong lap dau tien: i = 0 => tong =  0 + 0 = 0 
    // Vong lap thu hai: i = 0+1 = 1: day i: 0, 1 => tong = 0 + 1 = 1 
    // Vong lap thu 3: i = 1+1 = 2 : 0,1,2 => 0 +1+2 = tong + i 
    // Vong lap 4: i = 2+1 = 3: 0,1,2,3 => tong + i 
    // Cong thuc chung: tong +i
    // 0 + 1 + 2 +... + 10 
    // int tich = 1;
    // for(int i =1 ; i < 11 ; i++){
    //     tich = tich * i;
    // }
    // printf("%d",tich);
    // int n;
    // printf("Moi nhap n = ");
    // scanf("%d", &n);
    // int tong=0;
    // for(int i=0; i <= n ; i++){
    //     tong += i;
    // }
    // printf("tong la :%d\n",tong);
    // int tich = 1;
    // for (int i = 1; i < n + 1; i++) {
    //     tich *= i;
    // }
    // printf("Tich la: %d\n", tich);
    return 0;
    
}