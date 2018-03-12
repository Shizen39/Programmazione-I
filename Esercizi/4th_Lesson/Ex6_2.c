#include<stdio.h>

int main ()
{
int x, y, div, min, mcd;
printf("x="), scanf("%d", &x);
printf("y="), scanf("%d", &y);
min = x<y ? x : y;
for (div=1; div<=min ; div++)
	{
	if (x%div==0 && y%div==0)
		mcd=div;		
	}
printf("MCD(%d,%d) = %d\n",x,y,mcd);
}
