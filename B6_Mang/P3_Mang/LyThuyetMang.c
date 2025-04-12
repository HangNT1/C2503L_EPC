#include <stdio.h>

int main()
{
    /**
     * Mang: La tap hop cac phan tu  => CUNG KIEU DU LIEU 
     * VD: 9 -1 5 3 2 10 // day la 1 mang 
     *     -1 1.1 'HANG' 5 10  // day k phai la 1 array 
     * VD:   9 -1 4 3 10 -2 => gia tri cua tung phan 
     *  VT=> nguoi binh thuong:   1 2  3 4  5 6 
     * VT-LT: 0 1. 2 3  4 5 
     * => Khi nhac toi 1 mang => size: tong so luong phan tu trong mang 
     *    Khi mang: vi tri & gia tri cua mang.
     *    Trong lap trinh: Vi tri dau tien la 0 
     * VD: mang : arr[] co 6 phan tu 
     * gia tri cua vi tri 0 => arr[0] = 9 
     * gia tri cua vi tri 1 => arr[1]= -1
     * gia tri cua vi tri i bat ky => arr[i]
     * gia tri cua vi tri cuoi cung (size-1) => GT: arr[size-1]
     */ 
    // 1. Nhap vao mang so nguyen gom n phan tu . In cac phan tu trong mang ra man hinh 
    // 2. Nhap vao mang so thuc gom n phan tu . In cac phan tu trong mang ra man hinh 
    // 3. Nhap vao mang so nguyen gom n phan tu . Tinh tong cac phan tu trong mang
    // 4. Nhap vao mang so nguyen gom n phan tu . Tinh tong cac phan tu o vi tri le trong mang
    // ham:()
    // mang: []
    // cach khai bao mang: kieu du lieu cua mang ten mang[size cua mang]
    // B1: Khai bao mang 
    int arr[100]; // SIZE TOI DA => CHUA TOI DA 100 PHAN TU 
    // B2: Nhap size cua mang 
    int size;
    printf("Moi nhap size cua mang:");
    scanf("%d",&size);
    // B3: Nhap gia tri vao cho mang 
    printf("Moi nhap vao gia tri cua mang:");
    for (int i = 0 ; i< size; i++){
        // nhap 
        scanf("%d",&arr[i]);
    }
    // B4: In cac phan tu 
    printf("Cac phan tu vua nhap la:\n");
    for(int i = 0 ; i < size ;i ++){
        printf("%d\n",arr[i]);
    }
    return 0;
}