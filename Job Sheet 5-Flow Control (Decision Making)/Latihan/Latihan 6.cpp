/*
Nama  : Rafli Arianto
NIM   : 23343051
Prodi : Informatika
*/

#include <stdio.h>
#include <string.h>

int main(){

	char password [30];
	printf("==== Program Login ====\n");
	printf("Masukan password: ");
	scanf("%s", &password);

	if(strcmp(password, "kopi") == 0){ 
	printf("Selamat datang bos!\n");
	} 
	else {
	printf("Password salah, coba lagi!\n");
	}
	
	printf("Terimakasih sedah menggunakan aplikasi ini");

}
