#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int sayi1,sayi2,toplam;
	
	printf("Bir sayi girin: ");
	scanf("%d",&sayi1);
	
	printf("Bir sayi daha girin: ");
	scanf("%d",&sayi2);
	
	toplam=sayi1+sayi2;
	
	printf("Iki sayinin toplami: %d",toplam);
	
	
	return 0;
}
