#include <stdio.h>

int main()
{
   // do...while 
//   do{
//       // Lam gi thi lam
//   }while(dieu kien);
    
    // Su dung do..while
    // In cac so 0 -> 10 
    // In cac so chan 1  - n.
    // In cac so le va chia het cho 3 tu 1 - n
    // int number = 0;
    // do{
    //     printf("%d\n",number);
    //     number ++;
    // }while(number < 11);
    // int n;
    
    // printf("Nhap so: ");
    // scanf("%d", &n);
    
    // int i = 0;
    
    // // do {
    // //     if (i % 2 == 0) {
    // //         printf("%d\n", i);
    // //     }
        
    // //     i++;
    // // } while (i < n);
    
    // do {
    //     printf("%d\n", i);
    //     i += 2;
    // } while (i < n + 1);
    // int number = 0;
    // int n;
    // printf("moinhap");
    // scanf("%d", &n);
    // do{
    //   if( number %2 != 0 && number % 3 == 0){
    //       printf("%d\n",number);
    //   }
    //   number ++;
    // }while(number < n +1);
    // Su khac biet while & do...while 
    // while(dieu kien){
    //     // lam gi thi lam
    // }
    // // dieu kien sai luon o dau => so vong lap min: 0 
    // do{
    //     // lam gi thi lam 
    // }while(dieu kien);
    // dieu kien sai luon => song vap lap min : 1 
    //number. Chuong trinh lap lai khi  so nay >5 => thuc hien in so nay. <5 => dung 
    // while 
    int number;
    printf("Moi nhap so ");
    scanf("%d",&number);
    // while(number > 5){
    //     printf("Number ");
    // }
    do{
        printf("%d\n",number);
    }while(number >5);
    return 0;
}