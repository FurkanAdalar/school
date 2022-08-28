#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int main(){
	
	int derece;
	
	printf("Dereceyi girin: ");
	scanf("%d",&derece);
	
	if(derece>0){
		printf("Derece donma noktasý ustundedir");
	}
	else{
		printf("Derece donma noktasi altindadir");
	}
	
	return 0;
}
