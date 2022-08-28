#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int derece;
	
	printf("Dereceyi fahrenheit cinsinden girin: ");
	scanf("%d",&derece);
	
	derece=(derece-32)/1.8;
	
	printf("Celcius cinsinden: %d",derece);
	
	return 0;
}
