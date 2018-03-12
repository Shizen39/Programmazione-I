#include<stdio.h>

int main()
{
int n;
char c;
printf("Carattere = ");
scanf("%c", &c);
printf("Altezza triangolo = ");
scanf("%d", &n);

for (int x = 1; x<=2*n-1; x++)
	{
	 if (x<=n-1)
		 for (int y=0; y<=x-1; y++)
			 printf("%c", c);
	 else 
	 	 for (int y=1; y<=-x+2*n; y++)
			 printf("%c", c);
			 printf("\n");
	}



}
