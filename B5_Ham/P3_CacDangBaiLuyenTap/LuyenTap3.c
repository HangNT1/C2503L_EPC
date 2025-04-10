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
#include <stdio.h>
int main()
{
    int n;
    int tich = 1;
    printf ("moi nhap n");
    scanf ("%d",&n);
    for (int i = 1 ; i<=n; i++){
        if (i % 3 == 0 || i % 2 !=0){
            tich = tich * i;
        }
    }
    printf("Tich = %d", tich);
    

    return 0;
}