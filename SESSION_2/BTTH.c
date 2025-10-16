#include <stdio.h>
#include <math.h>
int main (){
	int a,b,c;
	
	printf("Nhap vao so a:");
	scanf("%d",&a);
	
	printf("Nhap vao so b:");
	scanf("%d",&b);
	
	printf("Nhap vao so c:");
	scanf("%d",&c);
	
	/*
	a=5, b=6, c=7;
	*/
	float S = ((pow(a,2) + sqrt(pow(b,2) + 4 * a * c)) / (2 * a)) - (pow(b,3)/pow(c,2)) + sqrt(abs(a-b)) ;

	printf("Gia tri cua bieu thuc S la: %.2f",S);
return 0;
}

