/*
Nama  : Rafli Arianto
NIM   : 23343051
Prodi : Informatika
*/

#include <stdio.h>

int main(){
	int umur = 19;
	float tinggi = 175.6;
	
	int *ptr_umur = &umur;
	int *ptr2 = &umur;
	float *ptr_tinggi = &tinggi;
	
	printf("alamat memori variabel 'umur' = %d\n", &umur);
	printf("alamat memori variabel 'tinggi' = %d\n", &tinggi);
	
	printf("\n");
	
	printf("referensi alamat memori *ptr_umur = %d\n", ptr_umur);
	printf("referensi alamat memori *ptr2 = %d\n", ptr2);
	printf("referensi alamat memori *ptr_tinggi = %d\n", ptr_tinggi);
	
	printf("\n");
	
	printf("alamat memori *ptr_umur = %d\n", &ptr_umur);
	printf("alamat memori *ptr2 = %d\n", &ptr2);
	printf("alamat memori *ptr_tinggi = %d\n", &ptr_tinggi);
	
	return 0;
	
}
