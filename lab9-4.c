#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int n,tersiN=0,kalan,ilkN;
	printf("Sayi: ");
	scanf("%d",&n);
	ilkN=n;
	
	while(n!=0){
		kalan=n%10;
		tersiN=tersiN*10+kalan;
		n=n/10;
	}
	
	if(ilkN==tersiN){
		printf("%d sayisi palindrom sayidir",ilkN);
	}
	else{
		printf("%d sayisi palindrom sayi degildir.",ilkN);
	}
	
	return 0;
}
