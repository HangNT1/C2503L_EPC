#include <stdio.h>
#include<string.h>
int main()
{
    char name[50] ="Nguyen Thuy Hang"; // mang => mang cua cac ky tu 
    char name1[50];
    char name2[50] ="Nguyen Van A";
    char a; // 1 ky tu 
    // do dai cua mang: strlen
    printf("Do dai cua mang:%d\n",strlen(name));
    for(int i = strlen(name) -1 ; i >=0; i--){
        printf("Vi tri%d - Gia tri %c\n",i,name[i]);
    }
    // strcpy : copy chuoi 
    strcpy(name1,name); // gia tri cua chuoi name 1 bang gia tri cua chuoi name
    printf("%s\n",name1);
    // strcat : Noi chuoi 
    printf("%s\n",strcat(name1,name2));
    // strchr : tim kiem ki tu 
    strchr(name2,'A');
    // https://v1study.com/c-ham-xu-ly-chuoi-string-a56.html
    return 0;
}
