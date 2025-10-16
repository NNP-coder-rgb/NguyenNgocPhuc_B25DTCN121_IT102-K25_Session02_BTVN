#include <stdio.h>
int main(){
	short a; // kieu so nguyen nhon trong khoang -10^4 < a < 10^4
	int b; // kieu so nguyen trong khoang -10^8 < b < 10^8
	long c; // kieu so nguyen lon hon int lon hon 10^6
	long long d; // kieu so nguyen rat lon -10^16 < d < 10^16
	unsigned short e; // kieu so nguyen duong < 10^4
	unsigned int f; // kieu so nguyen duong < 10^8
	unsigned long g; // kieu so nguyen duong > 10^6 va < 10^16 
	unsigned long long h; // kieu so nguyen duong <10^16
	char kitu; // kieu ki tu 
	printf("%hd %d %ld %lld %hu %u %lu %llu %c",a,b,c,d,e,f,g,h,kitu);
return 0;
}

