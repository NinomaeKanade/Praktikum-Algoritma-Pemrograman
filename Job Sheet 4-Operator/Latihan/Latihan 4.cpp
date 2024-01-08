/*
Nama  : Rafli Arianto
NIM   : 23343051
Prodi : Informatika
*/

#include <stdio.h>
#define void int

void main(){
	int a, b;

	a = 5;
	b = 10;
	
	b += a; 
	printf("Hasil b += a adalah %d\n", b);
	
	b -= a;
	printf("Hasil b -= a adalah %d\n", b);
	
	b *= a; 
	printf("Hasil b *= a adalah %d\n", b);
	
	b /= a; 
	printf("Hasil b /= a adalah %d\n", b);
	
	b %= a;
	printf("Hasil b %= a adalah %d\n", b);
}
