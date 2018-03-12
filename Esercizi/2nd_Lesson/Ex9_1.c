#include<stdio.h>
#include<stdlib.h> //per abs

int main ()
{
int n;
printf("Altezza triangolo =");
scanf("%d", &n);
for(int x=0; x<=2*n-1; x++)
	{
	for(int y=0; y<=abs(abs(x-n)-n)-1; y++)
		printf("*");
	printf("\n"); 
	}

}
