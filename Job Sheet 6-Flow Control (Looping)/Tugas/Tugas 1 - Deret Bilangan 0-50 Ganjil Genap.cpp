/*
Nama  : Rafli Arianto
NIM   : 23343051
Prodi : Informatika
*/

#include <stdio.h>

int main() {
	int i;
	printf("Deret bilangan genap dari 0 - 50\n");
	for (i=0;i<=50;i += 2){ 
		printf("%d\n", i);
	}
	
	printf("\n");

	printf("Deret bilangan ganjil dari 0 - 50\n");
	for (i=1;i<=50;i += 2){ 
		printf("%d\n", i);	
	}

	return 0;
}
