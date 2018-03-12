#include<stdio.h>

main(int argc, char *argv[])			//argc=numero di argomenti
										//argv[0] = nome del programma (di default)
										//argv[1] = nome da scrivere su cmd dopo argv[0] (./argv[0] argv[1])
{										//puntatore di array di carattere

if  (argc==2)
	printf ("%s say: Hello %s!\n",argv[0], argv[1]);
else 
	{
	printf("Error!\nFormato accettato: %s Nome\n", argv[0]);
	return 1;
	}




}
