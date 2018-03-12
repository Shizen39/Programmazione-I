#include<stdio.h>
//1) Fattoriale di n (n per il suo precedente fino a 1)
//2) Va in loop perchè 
int main ()
{
int n=0, res=1;
scanf("%d", &n);

while(n--)          //n=(n-1)!=0
	res*=(n+1);		//res = res*(n+1)
	
//es. n=4 
//n=3, res=1*4=4
//n=2, res=4*3=12
//n=1, res=12*2=24
//n=0, res=24*1=24
	
printf("%d\n",res);

return 0;



}
