#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int a,b,c;
	
	printf("Uc sayi girin: ");
	scanf("%d \n %d \n %d",&a,&b,&c);
	
	if(a>b&&a>c){
		printf("En buyuk sayi:%d",a);
	}
	else if(b>a&&b>c){
		printf("En buyuk sayi:%d",b);
	}
	else if(c>a&&c>b){
		printf("En buyuk sayi:%d",c);
	}
	
	return 0;
}
