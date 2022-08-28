#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	float uzunluk;
	
	printf("Uzunlugu feet cinsinden yazin: ");
	scanf("%f",&uzunluk);
	
	uzunluk=uzunluk*30.48;
	
	printf("Uzunlugun cm cinsinden degeri: %.2f",uzunluk);
	
	return 0;
}
