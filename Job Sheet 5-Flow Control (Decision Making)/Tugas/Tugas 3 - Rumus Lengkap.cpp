/*
Nama  : Rafli Arianto
NIM   : 23343051
Prodi : Informatika
*/

#include <stdio.h>

int main () {
    int pilihan; 
    
	printf("Rumus Lengkap\n\n");	
	
	printf("Operasi apa yang ingin Anda ketahui?\nTersedia rumus luas permukaan berikut:\n1. bola\n2. kubus\n3. balok\n4. tabung\n\n-> ");
	scanf("%d", &pilihan);
	
	if (pilihan < 1 || pilihan > 4){ 
		printf("Tolong masukkan input yang valid!");
	}
	
	switch (pilihan){
		case 1:
			printf("Rumus luas permukaan bola: Lp: 4 x phi x r�\n");
			break;
		case 2:
			printf("Rumus kubus: L = 2 � (pl + pt + lt) atau 6 x s�\n");
			break;
		case 3:
			printf("Rumus balok: 2 x (panjang x lebar + panjang x tinggi + lebar x tinggi\n");
			break;
		case 4:
			printf("Rumus tabung: L = 2 x phi x r (r + t)\n");
			break;
	}
	return 0;
}
