#include<stdio.h>

int main()
{
int a = 0;
double b = 3.5;
double c = (a = 5, b = b + 0.3);   //(...) è un literal, viene letto da sinistra a destra. c prima è uguale a "a=5", ma poi diventa "b = b + 0.3", e quindi in (...) a è diventato 5, b e c sono  3.5 + 0.3 
printf ("a=%d, b=%g, c=%g\n", a, b, c);

int d = (a++, --a+2);				//a aumenta di 1 (a++ => a=a+1 e non a+1!!) e poi diminuisce di 1 (quindi resta invariato, e d diventa a +2
printf ("a=%d, d=%d\n", a, d);

int i, j, k = 3;
double x = 3.3;
int f = (i=1, j=2, ++k +1);    //i=1 j=2 k=4 f=k+1=5
double g= (j=k!=1, ++x*2.0+1); 	//j=1 [perchè j=k, k!=1 è vero(=1), quindi j=1], x=3.3+1=4.3  g=(x*2.0)+1=9.6
printf ("i=%d, j=%d, k=%d, x=%g, f=%d, g=%g\n",i, j, k, x, f, g);


}
