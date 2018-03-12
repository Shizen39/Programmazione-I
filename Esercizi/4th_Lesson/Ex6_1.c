#include<stdio.h>

int main ()
{
int n, m;
printf("n=");
scanf("%d", &n);
puts("");

while (m++<n)
	printf("%d",m);
puts(" while");

m=1;
do	
	printf("%d", m);
while (m++<n);
puts(" do... while");

for (m=1; m<=n; m++)
	printf("%d",m);
puts(" for");



}
