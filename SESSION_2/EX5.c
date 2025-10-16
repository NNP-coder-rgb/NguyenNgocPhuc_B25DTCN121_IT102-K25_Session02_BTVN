#include <stdio.h>
int main(){
	int a,b;
	printf("Nhap vao so a: ");
	scanf("%d",&a);
	
	printf("Nhap vao so b: ");
	scanf("%d",&b);
	
	float c;
	printf("Nhap vao so c:");
	scanf("%f",&c);
	float numberFloat = a+b+c;
	int numberInt = (int)(a+b+c);
	printf("Tong float la: %.2f\n",numberFloat);
	printf("Tong int la: %d", numberInt);
return 0;
}

