#include <stdio.h>

int main()
{
    /**
     * Liet ke cac so 1-n va bỏ qua số 5 
     * Liệt kê cac số từ 1-n và nếu gặp số 5 thì dừng lại chương trình.
     */ 
    int n;
    printf("Nhap n: ");
    scanf("%d",&n); // 10 
    for (int i=1; i<n+1; i++){
        // // // C1: Suy nghi binh thuong: Khac 5 
        // // if (i != 5){
        // //     printf("%d\n",i);
        // // }
        // // C2: continue: Tiep tuc vong lap tiep theo => Bo qua vong lap hien tai 
        if(i == 5){
            continue; // BO QUA VONG LAP I = 5 
        }
        printf("%d\n",i);
        // Gap 5 thi dung lai 
        // C1: Suy nghi binh thuong => < 5 thi in 
        // if(i < 5){
        //     printf("%d",i);
        // }
        // break => Dung vong lap 
        if(i == 5){
            break; // DUNG VONG LAP THEO DIEU KIEN NAO DO 
        }
        printf("%d\n",i);
    }
    // i =1 => 1 
    // i = 1+1 = 2 => 2 
    // i = 5 => bo qua 
    // i = 6 => 6 
    return 0;
}