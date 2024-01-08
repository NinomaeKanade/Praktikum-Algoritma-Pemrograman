/*
Nama  : Rafli Arianto
NIM   : 23343051
Prodi : Informatika
*/

#include <stdio.h>

int main(){
	double volume, luas, radius;
	const double phi = 3.14;
	radius = 6;
	
	volume = 4/3*phi*radius*radius*radius;
	luas = 4*phi*radius*radius;

	printf("Berikut adalah perhitungan volume dan luas bola berdiameter 12cm\n");
	printf("Volume bola: %.2lf\n", volume);
	printf("Luas bola: %.2lf", luas);

	return 0;
}
