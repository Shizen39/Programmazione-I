#include <stdio.h>

int main()
{
  int a= 0;
  while(1)0{
      scanf("%d", &a);
      
      //from here
      static int x= 0; //static mantiene il suo valore al di fuori del blocco
      // (diverso da const che invece non può essere modificato)
      if(a < 0)
	break;

      x++;

      if(x < 5)
   	{
	  if(a > 10)
	    continue;
	  else
	    break;
	}
      else 
	break;
      //to here

      a++; //se avviene non verrà mai stampato perchè si ripete il loop
    }
  printf("Valore di a= %d\n", a);
  return 0;
}
