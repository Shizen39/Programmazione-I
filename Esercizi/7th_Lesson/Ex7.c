#include "myLib.h" //gcc -o Ex7 Ex7.c myLib.c

int main()
{
Song_t * p = allocSong();
printfSong(p);
deallocSong(p);
return 0;
}
