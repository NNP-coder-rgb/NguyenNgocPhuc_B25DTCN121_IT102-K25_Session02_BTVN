#include <stdio.h>
int main(){
	int a,b,c,d;
	printf("Nhap so nguyen a:");
	scanf("%d",&a);
	
	printf("Nhap so nguyen b:");
	scanf("%d",&b);
	
	printf("Nhap so nguyen c:");
	scanf("%d",&c);
	
	printf("Nhap so nguyen d:");
	scanf("%d",&d);
	int A = a * b - 2*c + 3*(a-d);
	printf("Gia tri cua bieu thuc A la: %d",A);
return 0;
}

