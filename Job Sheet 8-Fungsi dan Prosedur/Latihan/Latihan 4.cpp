/*
Nama  : Rafli Arianto
NIM   : 23343051
Prodi : Informatika
*/

#include <stdio.h>

float bagi(int a, int b){
	float hasil = (float)a / (float)b;
	return hasil;
}
int main(){
	printf("hasil 5/2 = %.2f\n", bagi(5, 2));
	return 0;
}
