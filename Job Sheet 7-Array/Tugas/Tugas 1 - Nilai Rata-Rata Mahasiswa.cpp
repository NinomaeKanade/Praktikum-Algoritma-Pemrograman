/*
Nama  : Rafli Arianto
NIM   : 23343051
Prodi : Informatika
*/

#include <stdio.h>

int main(){
	float nilai_mahasiswa[99];
	float nilai_total = 0;
	int jumlah_mahasiswa;
	
	printf("Masukkan jumlah mahasiswa: ");
	scanf("%d", &jumlah_mahasiswa);
	
	for (int i = 0; i < jumlah_mahasiswa; i++){
		printf("Masukkan nilai mahasiswa ke-%d: ", i + 1);
		scanf("%f", &nilai_mahasiswa[i]);
		nilai_total += nilai_mahasiswa[i];
	}
	
	float rata_rata = nilai_total/jumlah_mahasiswa;
	
	printf("Nilai rata-rata dari %d mahasiswa adalah: %.2f", jumlah_mahasiswa, rata_rata);
	
	
}
