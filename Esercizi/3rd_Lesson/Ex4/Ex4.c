#include <stdio.h>
#include "Ex4_library.h"
					/* Per compilarlo:
					$ gcc -c Ex4.c 
					e poi..
					$ gcc -o Ex4 Ex4.o Ex4_library.o 	*/
int main ()
{
double x = 5.5; //x, y ma possono essere diversi, a e b ecc
double y = 1.2;

double a = add_precise(x, y); 
double s = sub_precise(x, y);
double m = mult_precise(x, y);
double d = div_precise(x, y);


printf ("%g + %g = %g\n", x, y, a);
printf ("%g - %g = %g\n", x, y, s);
printf ("%g * %g = %g\n", x, y, m);
printf ("%g / %g = %g\n\n", x, y, d);

printf ("%g + %g =~ %d\n", x, y, add(x,y));
printf ("%g - %g =~ %d\n", x, y, sub(x,y));
printf ("%g * %g =~ %d\n", x, y, mult(x,y));
printf ("%g / %g =~ %d\n", x, y, div(x,y));
}
