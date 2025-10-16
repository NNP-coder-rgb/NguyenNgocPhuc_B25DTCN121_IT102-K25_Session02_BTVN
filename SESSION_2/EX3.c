#include <stdio.h>
int main(){
	int a,b;
	printf("Nhap vao so a:");
	scanf("%d",&a);
	
	printf("Nhap vao so b:");
	scanf("%d",&b);
	
	int Tong = a+b;
	int Hieu = a-b;
	int Tich = a*b;
	int Thuong = a/b;
	printf(" Tong:%d\n Hieu:%d\n Tich:%d\n Thuong:%d\n", Tong, Hieu, Tich, Thuong);
return 0;
}

