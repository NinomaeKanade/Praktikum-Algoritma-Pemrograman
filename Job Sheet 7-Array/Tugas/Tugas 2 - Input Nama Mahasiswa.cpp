/*
Nama  : Rafli Arianto
NIM   : 23343051
Prodi : Informatika
*/

#include <stdio.h>

int jumlah_mahasiswa;
char nama [99][50];
int i;

int main() {
	printf("Input banyak siswa: ");
	scanf("%d", &jumlah_mahasiswa);

	for(i = 0; i < jumlah_mahasiswa; i++) {
		printf("Input nama peserta ke-%d: ", i + 1); 
		scanf("%s", &nama[i]); 
	}
	
	printf("\n");
	
	for(i = 0; i < jumlah_mahasiswa; i++) {
		printf("Nama mahasiswa ke-%d:\n-> %s\n", i + 1, &nama[i]);
	}
}
