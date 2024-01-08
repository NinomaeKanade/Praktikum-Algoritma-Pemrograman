/*
Nama  : Rafli Arianto
NIM   : 23343051
Prodi : Informatika
*/

#include <stdio.h>

int main(){
	double rupiah, dolar, uang;
	rupiah = 2500000; 
	dolar = rupiah/15250; 
	
	printf("berikut adalah konversi dari rupiah ke dolar\n");
	printf("(Rp.2.500.000) (1$ = Rp.15.250)\n");	
	printf("dolar: %.2lf", dolar);

	return 0;
}
