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

void printfSong(Song_t* Dati)
{
printf("\n\"%s\" (%hu sec.)\nComposta da %s e suonata da %s\n", Dati->title, Dati->duration, Dati->composer, Dati->artist);
printf("Incisa in data %hu/%hu/%hu\n", Dati->published.day, Dati->published.month, Dati->published.year);
}

void deallocSong(Song_t* Dati)
{
free(Dati);
}

