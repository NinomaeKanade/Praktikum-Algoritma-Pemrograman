/*
Nama  : Rafli Arianto
NIM   : 23343051
Prodi : Informatika
*/

#include <stdio.h>

int main() {
	int harga_jam_pertama = 15000;
	int harga_jam_sisa = harga_jam_pertama / 2; 
	int durasi = 3;
	int total_harga;

	if (durasi > 1) { 
		int durasi_sisa = durasi - 1; 
		int harga_jam_sisa_total = durasi_sisa * harga_jam_sisa; 
		total_harga = harga_jam_pertama + harga_jam_sisa_total; 
	} else {
		total_harga = harga_jam_pertama; 
	}

	printf("Untuk durasi 3 jam, total harga adalah: Rp %d\n", total_harga);

	return 0;
}
