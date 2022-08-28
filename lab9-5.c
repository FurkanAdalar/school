#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main()
{
	float x,sum,no_row;
	int i,n;
	printf("Input the value of x :");
	scanf("%f",&x);
	printf("Input number of terms : ");
	scanf("%d",&n);
	sum =1; no_row = 1;
	for (i=1;i<n;i++)
	{
	  no_row = no_row*x/(float)i;
	  sum =sum+ no_row;
	}
	printf("\nThe sum  is : %f\n",sum);
} 
