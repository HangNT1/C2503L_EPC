/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
struct Student{
    char ten[100];
    int tuoi;
    float dtb;
};
int main()
{
    printf("Hello World");
    struct Student st;
    printf("moi nhap ten: ");
    gets(st.ten);
    printf("moi nhap tuoi: ");
    scanf("%d",&st.tuoi);
    printf("moi nhap diem trung binh: ");
    scanf("%f",&st.dtb);
    printf("ten: %s\n",st.ten);
    printf("tuoi: %d\n",st.tuoi);
    printf("diem trung binh: %f\n",st.dtb);

    return 0;
}
