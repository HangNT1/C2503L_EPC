#include <stdio.h>

int main()
{
    // Nhap du lieu tu ban phim => scanf
    // B1: Moi nhap du lieu 
    int number;
    printf("Moi ban nhap vao 1 so nguyen:");
    //B2: Nhap gia tri 
    // Cu phap scanf: scanf("%loai kieu du lieu",&ten bien);
    scanf("%d",&number);
    printf("so la %d",number);
    return 0;
}