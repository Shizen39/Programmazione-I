#include <stdio.h>

int absValue (int);						//Dichiarazione (type + identifier)

main ()
{

int pippo = -3;							//Definizione (value)
int valore = absValue (pippo);			//Definizione = Dichiarazione

printf("|%d| = %d \n", pippo, valore); 

}

int absValue (int val1)					
{

int returnValue = val1;				

if (returnValue < 0)
	returnValue = -returnValue;
	
return returnValue;



}
