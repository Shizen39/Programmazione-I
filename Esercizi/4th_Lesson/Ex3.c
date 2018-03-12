#include<stdio.h>

int main()
{
int x=0, y=0, z=0;						
x=(y=2) + (z=3);						//y=2, z=3 x=2+3=5
printf("x=%d, y=%d, z=%d\n", x, y, z);

x=0, y=0, z=0;							//y=5, z=3, x=y=5
x= y=2 + (z=3);
printf("x=%d, y=%d, z=%d\n", x, y, z);

/*
x=0, y=0, z=0;
x=(y=2) + z=3;
printf("x=%d, y=%d, z=%d\n", x, y, z);

x=0, y=0, z=0;
x= y=2 + z=3;
printf("x=%d, y=%d, z=%d\n", x, y, z);
*/
}
