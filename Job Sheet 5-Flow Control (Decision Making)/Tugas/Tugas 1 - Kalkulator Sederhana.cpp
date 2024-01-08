/*
Nama  : Rafli Arianto
NIM   : 23343051
Prodi : Informatika
*/

#include <stdio.h>

int main() {
	double a,b;
	char pilihan;
	
	printf("Input jenis operasi yang akan dilakukan (+, -, /, *)\n");
	scanf("%c", &pilihan);

	printf("Input angka 1: ");
	scanf("%lf", &a);

	printf("Input angka 2: ");
	scanf("%lf", &b);
	
	switch(pilihan){
		case '+':
			printf("%.lf", a+b);
			break;
		case '-':
			printf("%.lf", a-b);
			break;
		case '*':
			printf("%.lf", a*b);
			break;
		case '/':
			printf("%.2lf", a/b);
			break;
		default:
			printf("Masukkan input yang valid!");
			break;
	}
}
