#include <stdio.h>

main()
{
int a;
int *pA = &a;

printf ("pA = %p\npA+1 = %p\n", *pA, *pA+1);

}
