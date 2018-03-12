#include <stdio.h>

int main()
{		//1)n++ => sx-dx (n+1 è l'ultima cosa che fa, ha meno precedenza)  2)++n=>dx-sx (n+1 è la prima cosa che fa, ha più precedenza)  
  int a, b =0, c =0;
  a= ++b + ++c;                  	// a=2 b=1 c=1  
  printf("a=%d, b=%d, c=%d\n", a, b, c);
  a= b++ + c++;						// a=2 b=1+1=2 c=1+1=2
  printf("a=%d, b=%d, c=%d\n", a, b, c);
  a= ++b + c++;						//a=3+2=5 b=3 c=3
  printf ("a=%d, b=%d, c=%d\n", a, b, c);
  a= b-- + --c;						//a=2+3=5 b=2 c=2
  printf ("a=%d, b=%d, c=%d\n", a, b, c);
  int q = q;						//q=0
  printf ("q=%d\n", q);
  int r = 2+ q++;					//r=2 q=1
  printf ("r=%d, q=%d\n", r, q);
}
