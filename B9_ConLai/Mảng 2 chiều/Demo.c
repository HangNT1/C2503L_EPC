// Nhap tt cua 1 ma tran  tu ban phim voi so hang, so cot tu ban phim. 
// In tt cua 1 ma tran ra man hinh
#include <stdio.h>

int main(){
    int hang;
    int cot;
    printf("moi nhap hang");
    scanf ("%d",&hang);
    printf ("moi nhap cot");
    scanf ("%d",&cot);
    int arr[hang][cot];
    for (int i=0; i<hang;i++){
        for (int j=0; j<cot; j++){
            printf ("moi nhap so hang:  %d cot %d ", i, j );
            scanf ("%d",&arr[i][j]);
        
        }
    }
    for (int i=0; i<hang; i++){
        for (int j=0; j<cot;j++ ){
            printf ("%d",arr[i][j]);
        }
        
    }
    return 0;
}