#include<stdio.h>
#include<string.h> 

int main(){
	char ten[50];
	int tuoi;
	char dia[50];
	double chieucao;
	double cannang;
	printf("moi nhap ten");
	gets(ten);
	
	printf("moi nhap tuoi");
	scanf("%d",&tuoi);
// 	getchar();        // Xoa ky tu \n trong bo nho dem 
	fflush(stdin);
	
	printf("moi nhap dia");
	gets(dia);
	
	printf("moinhap chieucao");
	scanf("%lf",&chieucao);
	
	printf("moinhap can nang");
	scanf("%lf",&cannang);
	
	printf("ten: %s\n",ten);
	printf("Tuoi: %d\n",tuoi);
	printf("Dia chi: %s\n",dia);
	printf("Chieu cao: %.2lf\n",chieucao);
	printf("Can nang: %.2lf\n",cannang);
	return 0;
}