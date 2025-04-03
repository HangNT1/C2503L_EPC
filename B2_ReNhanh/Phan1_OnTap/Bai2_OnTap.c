#include<stdio.h>
int main(){
    int num1 = 4;
    int num2 = 5;
    int num3 = 6;
    
    int tong = (num1 + num2 + num3);
    int hieu = (num1 - num2 - num3);
    int tich = (num1 * num2 * num3);
    // 4:5:6
    float thuong = (1.0*num1)/num2/num3;
    printf(" tong cua 3 so la %d\n", tong);
    printf(" hieu cua 3 so la %d\n", hieu);
    printf(" tich cua 3 so la %d\n", tich);
    printf(" thuong cua 3 so la %.2f\n", thuong);
    
    return 0;
}