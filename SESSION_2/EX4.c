#include <stdio.h>
int main(){
	int a, b;
	printf("Nhap chieu dai cua hinh chu nhat:");
	scanf("%d", &a);
	
	printf("Nhap chieu rong cua hinh chu nhat:");
	scanf("%d", &b);
	
	int Chu_vi = (a + b)*2;
	int Dien_tich = a*b;	
	printf("Chu vi la: %d\n Dien tich la: %d", Chu_vi, Dien_tich);
return 0;
}

