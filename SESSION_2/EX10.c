#include <stdio.h>
#include <math.h>
int main (){
	int a,b,c;
	printf("Nhap so a:");
	scanf("%d",&a);
	
	printf("Nhap so b:");
	scanf("%d",&b);
	
	printf("Nhap so c:");
	scanf("%d",&c);
	float S= (sqrt((pow(a,2) +pow(b,2)))/(c+1)) + ((a*b)/((float)c)) - sqrt(abs(a-b)+pow(c,2)) ;

	printf("Gia tri cua bieu thuc S: %.2f",S);
return 0;
}


