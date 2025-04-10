 /**
 * 1. Tinh tong cua cac so tu 1 -> 10 
 * 2. Tinh tich cua cac so tu 1 -> 10 
 * 3. Tinh tong cua cac so tu 1 -> n 
 * 4. Tinh tich cua cac so tu 1 -> n 
 * 5. Tinh tong cua cac so chia het cho 5 tu 1 -> n 
 * 6. Tinh tich cua cac so chia het cho 3 hoac la so le tu 1 -> n 
 * 7. Liet ke cac so chia het cho 2 hoac chia het cho 5 tu 1 ->n 
 * 8. Tinh tong cac so nghich dao tu 1 ->n 
 * S = 1/1 + 1/2 + 1/3 +.... + 1/n
 * 9. S = 1^2 + 2^2 +... n^2
 */ 
#include <stdio.h>
#include <math.h> // tinh can - sqrt, luy thua - pow

int main()
{
    int n;
    printf("Moi nhap vao n:");
    scanf("%d",&n);
    int  tong = 0;
    for(int i= 1; i< n+1; i++){
        tong = tong + pow(i,2);
    }
    // for(int i = 1; i < n+1; i++){
    //     tong = tong + 1.0/i;
    // }
    printf("Sum = %d",tong);
    return 0;
}