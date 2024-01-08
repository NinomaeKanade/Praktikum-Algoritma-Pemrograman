/*
Nama  : Rafli Arianto
NIM   : 23343051
Prodi : Informatika
*/

#include <stdio.h>
#define void int

void main(){
	
	int a, b;
	char persen('%');
	
	printf("Inputkan nilai a: ");
	scanf("%i", &a);
	
	printf("Inputkan nilai b: ");
	scanf("%i", &b);
	
	printf("Hasil a + b: %i\n", a + b);
	printf("Hasil a - b: %i\n", a - b);
	printf("Hasil a * b: %i\n", a * b);
	printf("Hasil a / b: %i\n", a / b);
	printf("Hasil a %c b: %i\n", persen, a % b);
	
}
