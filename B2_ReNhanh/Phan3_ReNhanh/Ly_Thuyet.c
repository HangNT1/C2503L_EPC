#include <stdio.h>

int main()
{
    // Rẽ nhánh 
    // P1: If... else 
    // Giai quyet cac bai toan co nhieu truong hop 
    // Cu phap:
    // if(dieu kien){
    //     // code lui vao 1 tab
    // }else if(dieu kien){
    //     // code => lam gi thi lam
    // }
    // // so else if khong gioi han 
    // else{
    //     // TH con lai 
    // }
    // Chu y:
    // Mo dau bang if 
    // CHI CO 1 IF 
    // CHI CO 1 ELSE
    // Ket thuc la else 
    // bai toan co 5 TH: 
    // 1 if, 1 else , 3 else if 
    // Nhap vao 1 so nguyen. Kiem tra so day nhu the nao voi 5 
    // B1: Nhap so nguyen tu ban phim 
    int number;
    printf("moi ban nhap so nguyen tu ban phim");
    scanf("%d",&number);
    // B2: Check dk
    // 9 => lon hon 5 
    // 3 => nho hon 5 
    // 5 => bang 5 
    // 1 if, 1 else, 1 else if
    // 1 trong cac dk
    if(number == 5){
        // DK sai => KHONG NHAY VAO TRONG IF 
        printf("Day la so bang 5");
    }else if( number > 5){
        printf("Day la so lon hon 5");
    }else{
        // TH con lai 
        printf("Day la so nho hon 5");
    }
    //bai 13 
    int a 
    printf("Chay xong roi");
    return 0;
}