/*
Nama  : Rafli Arianto
NIM   : 23343051
Prodi : Informatika
*/

#include <stdio.h>

int main(){
	int score = 0;
	
	int *p_score = &score;
	
	printf("isi *p_score = %d\n", *p_score);
	
	printf("isi score awal = %d\n", score);
	
	*p_score = 5;
	
	printf("isi score setelah diubah = %d\n", score);
	
}
