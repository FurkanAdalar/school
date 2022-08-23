#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int vize,final,no,notu;
	
	printf("Ogrenci no girin: ");
	scanf("%d",&no);
	
	printf("Vize ve final notunu gir: ");
	scanf("%d \n %d",&vize,&final);
	
	notu=(vize*0.4)+(final*0.6);
	
	if(notu>=50){
		printf("Gecti");
	}
	else{
		printf("Kaldi");
	}
	printf("\n");
	printf("Ogrenci no: %d",no);
	
	return 0;
}
