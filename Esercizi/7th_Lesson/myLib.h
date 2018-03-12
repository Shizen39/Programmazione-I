struct Date {
			unsigned short day;
			unsigned short month;
			unsigned short year;		
			};
typedef struct {
			char title[64];			
			char artist[32];
			char composer[32];
			unsigned short duration;
			struct Date published;			
			} Song_t;
			
Song_t * allocSong(void);
void printfSong(Song_t*);
void deallocSong(Song_t* p);

