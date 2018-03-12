#include <stdio.h>
#include <stdlib.h>
#include "myLib.h"

main()
{
	Song_t * song = allocSong();
	FILE *fp = fopen("output.txt", "w");
	fprintfSong (song, fp);
	fclose(fp);
	deallocSong(song);
	
	Song_t * song2 =  malloc(sizeof(Song_t));
	fopen("output.txt", "r");
	fscanfSong(song2, fp);
	printfSong(song2);
	fclose(fp);
	deallocSong(song2);
}