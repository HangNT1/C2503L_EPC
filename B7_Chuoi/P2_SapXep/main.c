/**
 * Sap xep 
 * Chuoi 
 * 
 */ 
#include <stdio.h>

int main()
{
   // Nhap 1 mang so nguyen tu ban phim va in ra man hinh 
    int size;
    printf("Moi nhap size:");
    scanf("%d",&size);
    int arr[size];
    printf("Moi nhap cac phan tu trong mang\n");
    for(int i = 0 ; i < size;i++){
        printf("Phan tu o vi tri %d:",i);
        scanf("%d",&arr[i]);
    }
    // printf("In danh sach mang");
    // for(int i = 0 ; i < size;i++){
    //     printf("%d\n",arr[i]);
    // }
    // In danh sach theo chieu tang dan 
    // - 1 0 6 8 9 => sap xep : bubble sort, selection sort, quick sort, insertion sort...
    for(int i = 0 ; i < size ; i ++){
        // arr[i] // 5 
        // 3: j 
        // 5 3 -1 8 
        // i = 0 => j = 1 => arr[1] = 3 
        // printf("i = %d\n", i);
        for(int j = i+1 ;  j < size ; j++){
            // J= i +1 => Lay gia tri ngay ben canh i 
            // printf("\t j = %d\n",j);
            // for(int k = j+1 ; k < size ; k ++){
            //     printf("\t\t k = %d\n",k);
            // }
            if(arr[i] > arr[j+1]){
                // Doi cho 
                int temp = arr[i]; // Do nuoc coc 1 => coc 3 
                // Do nuoc tu coc 2 => coc 1 
                arr[i] = arr[j+1];
                // Do coc 3 => coc 2 
                arr[j+1]= temp;
            }
        }
    }
    printf("In danh sach mang");
    for(int i = 0 ; i < size;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}