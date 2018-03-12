#include <stdio.h>
main()
{

enum weekdays{sunday, monday, tuesday, wednesday, thursday, friday, saturday};

enum weekdays today, tomorrow;
today = friday;
tomorrow = today + 1;

printf("tomorrow = %d\n", tomorrow);

enum{easter = 0};

if(today == sunday)
printf("Today is Sunday\n");
else
	if(today == monday)
	printf("Today is Monday\n");
	else
		if(today == tuesday)
		printf("Today i s Tuesday \n");
		else
			if(today == wednesday)
			printf("Today is Wednesday\n");
			else
				if(today == thursday)
				printf("Today is Thursday\n");
				else
					if(today == friday)
					printf("Today is Friday\n");
					else
					if(today == saturday)
					printf("Today is Saturday\n");
					
if(easter != today)
printf("Today cannot be Eastern\n");



}
