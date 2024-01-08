/*
Nama  : Rafli Arianto
NIM   : 23343051
Prodi : Informatika
*/

#include <stdio.h>

#define phi 3.14

float jari_jari;

float luas(float r) {
	return phi * r * r;
}

float keliling(float r) {
	return 2 * phi * r;
}


int main() {
	printf("Masukkan jari-jari dari lingkaran tersebut: ");
	scanf("%f", &jari_jari);
	printf("Luas dari lingkaran tersebut adalah: %.2f\n", luas(jari_jari));
	printf("Keliling dari lingkaran tersebut adalah: %.2f\n", keliling(jari_jari));
}
