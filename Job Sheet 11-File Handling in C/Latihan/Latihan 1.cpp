/*
Nama  : Rafli Arianto
NIM   : 23343051
Prodi : Informatika
*/

#include <stdio.h>

int main(){
	char buff[255]; 
	FILE *fptr; 
	
	if ((fptr = fopen("namasaya.txt", "r")) == NULL){ 
		printf("File tidak ditemukan!");
		return 1;
	}
	
	while(fgets(buff, sizeof(buff), fptr)){ 
		printf("%s", buff);
	}

	fclose(fptr);
	
	return 0;
}
