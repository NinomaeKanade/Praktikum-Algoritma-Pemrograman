/*
Nama  : Rafli Arianto
NIM   : 23343051
Prodi : Informatika
*/

#include <stdio.h>

int main(){
	char buff[255];
	char text[255];
	FILE *fptr;
	
	fptr = fopen("namasaya.txt", "w");
	
	for(int i = 0; i < 5; i++){
	
	printf("Inputkan isi file : ");
	fgets(text, sizeof(text), stdin);
	
	fputs(text, fptr);
	}
	
	printf("File berhasil ditulis\n");
	
	fclose(fptr);
	
	fptr = fopen("namasaya.txt", "r");
	
	while(fgets(buff, sizeof(buff), fptr)){
		printf("Isi filenya sekarang: %s", buff);
	}
	
	fclose(fptr);
	
	return 0;
}
