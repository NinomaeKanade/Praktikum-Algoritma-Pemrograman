/*
Nama  : Rafli Arianto
NIM   : 23343051
Prodi : Informatika
*/

#include <stdio.h>

int main(){
	char nama[50], prodi[50], fakultas[50]; 
	int NIM, nilaiPraktikum, nilaiUts, nilaiUas, nilaiAkhir; 
	
	printf("Nama: ");
	scanf("%s", &nama);
	
	printf("NIM: ");
	scanf("%d", &NIM);

	printf("Prodi: ");
	scanf("%s", &prodi);

	printf("Fakultas: ");
	scanf("%s", &fakultas);

	printf("Nilai Praktikum: ");
	scanf("%d", &nilaiPraktikum);

	printf("Nilai UTS: ");
	scanf("%d", &nilaiUts);

	printf("Nilai UAS: ");
	scanf("%d", &nilaiUas);

	nilaiAkhir = (nilaiPraktikum * 30/100) + (nilaiUts * 30/100) + (nilaiUas * 40/100);

	printf("\n=====================\n");
	printf("Nama: %s\n", nama);
	printf("NIM: %d\n", NIM);
	printf("Prodi: %s\n", prodi);
	printf("Fakultas: %s\n", fakultas);
	printf("Nilai Praktikum: %d\n", nilaiPraktikum);
	printf("Nilai UTS: %d\n", nilaiUts);
	printf("Nilai UAS: %d\n", nilaiUas);
	printf("Nilai Akhir: %d\n", nilaiAkhir);
	printf("=====================\n");

	return 0;
}
