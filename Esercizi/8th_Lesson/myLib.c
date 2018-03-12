#include <stdio.h>
#include <stdlib.h>
#include "myLib.h"

Song_t* allocSong(void)
{
Song_t* ret = malloc(sizeof(Song_t));
printf("Titolo: ");
scanf("%s", ret->title);
printf("Artista: ");
scanf("%s", ret->artist);
printf("Compositore: ");
scanf("%s", ret->composer);
printf("Durata (secondi): ");
scanf("%hu", &ret->duration);
printf("Data di pubblicazione (gg/mm/aaaa): ");
scanf("%hu/%hu/%hu", &ret->published.day, &ret->published.month, &ret->published.year);

while (ret->published.day>31||ret->published.month>12){
	puts("Valore non valido!");
	printf("Data di pubblicazione (gg/mm/aaaa): ");
	scanf("%hu/%hu/%hu", &ret->published.day, &ret->published.month, &ret->published.year);
	}
return ret;
} 

void fprintfSong(Song_t* Dati, FILE *fp)
{	
	fprintf(fp,"\n%s; %s; %s; %hu; %hu/%hu/%hu;",
				Dati->title,
				Dati->artist,
				Dati->composer,
				Dati->duration,
				Dati->published.day, 
				Dati->published.month, 
				Dati->published.year
				 );
}

Song_t* fscanfSong(Song_t* Dati, FILE *fp)
{

	fscanf(fp,"\n%s; %s; %s; %hu; %hu/%hu/%hu;",
				Dati->title,
				Dati->artist,
				Dati->composer,
				&Dati->duration,
				&Dati->published.day, 
				&Dati->published.month, 
				&Dati->published.year
				 );
return Dati;
}


void deallocSong(Song_t* Dati)
{
free(Dati);
}

void printfSong(Song_t* Dati)
{
printf("\n\"%s\" (%hu sec.)\nComposta da %s e suonata da %s\n", Dati->title, Dati->duration, Dati->composer, Dati->artist);
printf("Incisa in data %hu/%hu/%hu\n", Dati->published.day, Dati->published.month, Dati->published.year);
}


