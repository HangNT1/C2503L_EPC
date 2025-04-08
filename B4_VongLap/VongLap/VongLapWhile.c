 // Liệt kê các số từ 1 -> 20 
# include<stdio.h>
int main (){
    // Vong lap: Lap di lap lai 1 hanh dong gi do nhieu lan 
    // 1. for 
    // 2. while 
    // 3. do..while 
    // Cu phap : while 
    // while(dieu kien){
    //     // lam gi thi lam : Nhung gi vut trong nay => lap lai 
    // }
    // printf("1\n");
    // printf("2\n");
    // printf("3\n");
    // printf("4\n");
    // printf("5\n");
    // printf("6\n");
    // In cac so tu 0 - 10
    // int number = 0; // gia tri bat dau 
    // while(number <= 10){
    //     // in 
    //     printf("%d\n",number);
    //     // muon bien number => tang len 1 don vi 
    //     // number = number + 1; // Gia tri cua bien number => duoc tang len 1 don vi 
    //     // number = number -1;
    //     // number +=1;
    //     // number +=2;
    //     // number -=1;
    //     // // RIENG TANG/GIAM LEN 1 DON VI 
    //     // number ++;
    //     // number --;
    // }
    // // Chi thoat khoi vong lap => dk bi sai 
    // // 0, 1, 2..
    // In cac so tu 0 - 50
    // In cac so chac tu 0 -> 50 
    // In cac so tu 0 -> n voi n la gia tri nhap vao tu ban phim
    // int num = 0;
    // while(num <= 50){
    //     printf("%d\n",num);
    //     num = num + 1;
    // }
    // int chan = 0;
    // while(chan <= 50){
    // //   if(chan %2 == 0){
    // //       printf("%d\n",chan);
    // //   }
    // //   chan = chan +1;
    //     printf("%d\n",chan);
    //     chan = chan +2;
    // }
    int number =0;
    int n;
    printf ("nhap so");
    scanf ("%d",&n);
    // Nen dung <
    while (number < n + 1){
        printf ("%d\n",number);
        number++;
    }
    return 0;
}