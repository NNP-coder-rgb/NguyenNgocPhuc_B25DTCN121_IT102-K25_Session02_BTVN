#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	printf("Nhap so a:");
	scanf("%d",&a);
	
	printf("Nhap so b:");
	scanf("%d",&b);
	
	printf("Nhap so c:");
	scanf("%d",&c);
	int A = pow(a,3) + pow(b,2)+2*c + sqrt((a+b+c));
	printf("Gia tri cua bieu thuc la: %d",A);
return 0;
}

