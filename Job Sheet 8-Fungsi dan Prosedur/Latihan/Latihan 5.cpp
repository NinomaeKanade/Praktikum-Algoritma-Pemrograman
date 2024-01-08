/*
Nama  : Rafli Arianto
NIM   : 23343051
Prodi : Informatika
*/

#include <stdio.h>
int sum(int n);

int main(){
	int number, result;
	printf("enter a positive interger : ");
	scanf("%d", &number);
	
	result = sum(number);
	
	printf("sum = %d", result);
}

int sum(int num){
	if(num != 0){
		return num + sum(num-1);
	
	}
	else
		return num;
}
