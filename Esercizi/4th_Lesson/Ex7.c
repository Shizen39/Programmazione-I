#include<stdio.h>
main()
{
float a, b, c;
printf ("A = "); scanf("%g", &a);
printf ("B = "); scanf("%g", &b);
printf ("C = "); scanf("%g", &c);  

if ((a || b|| c) <= 0)
	printf ("Errore! I lati devono essere positivi.\n");
else if (a>=b+c || b>=a+c || c>=a+b)
	printf ("Errore! Ogni lato deve essere minore della somma degli altri due.\n");
else if ((b>c ? a<=b-c : a<=c-b) || (a>c ? b<=a-c : b<=c-a) || (a>b ? c<=a-b : c<=b-a))
	printf ("Errore! Ogni lato deve essere maggiore della differenza degli altri due.\n");
else
	{
	if (a==b && b==c)
		printf ("Il triangolo è Equilatero.\n");
	else if (a==b ^ b==c ^ a==c)
		printf ("Il triangolo è Isoscele.\n");
	else if (a!=b && b!=c && a!=c)
		printf ("Il triangolo è Scaleno.\n");
	else if ((a*a==b*b+c*c) || (b*b==a*a+c*c) || (c*c==b*b+a*a))
		printf ("Il triangolo è Rettangolo.\n");
	}		


}
