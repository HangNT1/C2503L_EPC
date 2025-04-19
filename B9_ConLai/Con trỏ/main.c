#include<stdio.h>
void tangGiaTri(int *x){
    *x=*x+1;
}
int main(){
    // Con tro cho phep cac ban thao tac truc tiep vs bo nho 
    int a = 5; // Gia tri cua bien a = 5 // dia chi o nho 
    // int *p = &a;
    // // Lay dia chi : & 
    // // &a : Lấy địa chỉ của biến a  
    // // *p: truy cập vào giá trị địa chỉ p đang trỏ tới
    // // & => Lấy địa chỉ của biến 
    // // * => Giá trị tại địa chỉ (tham chiếu)
    // printf("Gia tri a : %d\n", a);
    // printf("Dia chi a : %d", &a);
    printf("Truoc :Gia tri a = %d\n",a);
    tangGiaTri(&a);
    printf("Gia tri a = %d\n",a);
    // Cấp phát bộ nhớ động trong mảng: malloc,realloc... 
    return 0;
}