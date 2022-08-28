#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int faktoriyel=1;
	int sayi;
	
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	for(int i=1;i<=sayi;i++){
		faktoriyel=faktoriyel*i;
	}
	printf("%d != %d",sayi,faktoriyel);
	
	return 0;
}
