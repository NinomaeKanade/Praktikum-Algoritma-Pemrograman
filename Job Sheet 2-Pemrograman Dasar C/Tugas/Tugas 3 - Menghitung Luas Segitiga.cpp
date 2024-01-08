/*
Nama  : Rafli Arianto
NIM   : 23343051
Prodi : Informatika
*/

#include <stdio.h>

int main(){
	double alas, tinggi, luas;
	
	printf("Alas: ");
	scanf("%lf", &alas);
	
	printf("Tinggi: ");
	scanf("%lf", &tinggi);
	
	luas = alas * tinggi;
	
	printf("Luas: %.2lf", luas);
	
	return 0;
}
