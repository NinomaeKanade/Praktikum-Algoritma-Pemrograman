/*
Nama  : Rafli Arianto
NIM   : 23343051
Prodi : Informatika
*/

#include <stdio.h>

double penjumlahan(double a, double b) {
    return a + b;
}

double pengurangan(double a, double b) {
    return a - b;
}

double perkalian(double a, double b) {
    return a * b;
}

double pembagian(double a, double b) {
    return a / b;
}


int main() {
	double a,b;
	char pilihan;
	
    printf("Masukkan operasi yang ingin dilakukan (+, -, *, /)\n -> ");
    scanf("%c", &pilihan);
    
    printf("Input angka 1: ");
	scanf("%lf", &a);

	printf("Input angka 2: ");
	scanf("%lf", &b);

	switch(pilihan){
		case '+':
			printf("%.lf", penjumlahan(a, b));
			break;
		case '-':
			printf("%.lf", pengurangan(a, b));
			break;
		case '*':
			printf("%.lf", perkalian(a, b));
			break;
		case '/':
			printf("%.2lf", pembagian(a, b));
			break;
		default:
			printf("Masukkan input yang valid!");
			break;
	}    
    
	return 0;
}
