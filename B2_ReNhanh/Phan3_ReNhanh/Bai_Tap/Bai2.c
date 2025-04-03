/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a;
    printf("moi ban nhap:");
    scanf("%d",&a);
    if(a>0){
        printf("day la so nguyen duong:");
    }else if (a==0){
        printf("day ko phai nguyen duong cung kho phai nguyen am:");
    }else{
        printf("day la so nguyen am");
    }

    return 0;
}