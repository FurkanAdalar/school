#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int r,islemtur;
	float pi=3.14,alan,cevre;
	
	printf("Dairenin yaricapini girin: ");
	scanf("%d",&r);
	
	alan=pi*r*r;
	cevre=2*pi*r;
	
	printf("Islem turu icin 1(cevre) ya da 2(alan) basiniz");
	scanf("%d",&islemtur);
	
	if(islemtur==1){
		printf("Cevre=%.1f",cevre);
	}
	else if(islemtur==2){
		printf("Alan=%.1f",alan);
	}
	else{
		printf("Yanlis giris!!!");
	}
	
	
	return 0;
}
