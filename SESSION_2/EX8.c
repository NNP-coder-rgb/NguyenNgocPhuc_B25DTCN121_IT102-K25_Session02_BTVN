#include <stdio.h>
int main(){
	int number = 12345;
	int number_1 = number % 10;
	int number_2 = (number / 10) % 10; 
	int number_3 = (number / 100) % 10;
	int number_4 = (number / 1000) % 10;
	int number_5 = (number /10000);
	int result = number_1*10000+number_2*1000+number_3*100+number_4*10+number_5;
	printf("So dao nguoc la: %d",result);
return 0;
}

