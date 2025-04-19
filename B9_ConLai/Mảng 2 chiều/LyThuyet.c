/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   /**
    * Mảng 2 chiều => 2: chiều ngang, chiều dọc => tổ chức theo dưới dạng hàng & cột giống như 1 bảng 
    * 
    * Cách khai báo: [] kiểu dữ liệu tên mảng[số hàng trước][số cột];
    * VD: int arr[3][4]; // MẢNG 2 CHIỀU GỒM 3 HÀNG VÀ 4 CỘT (TỔNG CÓ : 12 PHẦN TỬ )
    * int ar[2][3]={
        {3,4,6},
        {-1,2,9}
    }
    Lưu ý với mảng 2 chiều: CÓ THỂ KHÔNG CẦN GHI SỐ HÀNG => TỰ TÍNH SỐ HÀNG (BẮT BUỘC SỐ CỘT )
    */ 
    // int arr[2][5]; // dung => 2 hang, 5 cot
    // int arr1[][3]; // dung => 3 cot 
    // int arr2[6][];
    // int arr3[-1][-2];
    int a[2][3]= {
        {1,5,7},
        {3,2,4}
    };
    for(int i = 0 ; i < 2;i++){
        for(int j = 0 ; j < 3;j++){
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }
    /**
     * Môt số lưu mảng 2 chiều:
     *  - Lưu trữ ma trận 
     *  - Bảng điểm sinh viên 
     *  - Cờ caro, sudoku
     *  - Bản đồ (map) trong game
     */ 
    // Nhap tt cua 1 ma tran  tu ban phim voi so hang, so cot tu ban phim. 
    // In tt cua 1 ma tran ra man hinh
    return 0;
}