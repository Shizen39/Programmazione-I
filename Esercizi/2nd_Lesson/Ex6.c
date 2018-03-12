#include<stdio.h>

int abs (int); 			//Dichiaro la funzione abs 

int main()
{
float pippo = -3.678;		//Chiamo la funzione abs in main

int x = abs(pippo);  //in abs pippo (che è float), perde l'informazione dei decimali, in quanto abs ritorna un int
printf("|%f| = %f\n", pippo, x);
return 0;
}
						

int abs(int val)		//Definisco abs (tipo main)
{
int absolute = val<0 ? (float)-val : (float)val; 			
//il conditional fa parte del valore di absolute.. absolute vale(=) -val se val<0, altrimenti vale val. 
return absolute;

}



