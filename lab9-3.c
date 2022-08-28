#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int sayac;
	printf("Cift sayilar 1000 ile 2000 arasýndaki:");
	
	for(sayac=1000;sayac<=2000;sayac++){
		if(sayac%2==0){
			printf("%d",sayac);
			printf("\n");
		}
	}
	
	return 0;
}
