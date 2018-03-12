#include<stdio.h>
#include<stdlib.h>
void print(int, int*);

int main ()
{
int n=0;
puts("Numero valori:");
scanf("%d", &n);
int* array = calloc(n, sizeof(int));
for (int i=0; i<n; i++)
	scanf("%d", array+i); 
puts("\nCalloc ");
print(n, array);
free(array);

array = malloc(2*n*sizeof(int));
puts("\nMalloc ");
print(2*n, array);

for (int i=0; i<2*n; i++)
	array[i]=i;
puts("\nValori indicizzati ");
print(2*n, array);

array = realloc(array, n*sizeof(int));
puts("\nRidotti ");
print(n, array);

array = realloc(array, 2*n*sizeof(int));
puts("\nSeconda metà ");
print(n,&array[n]); //perchè in realtà scrivere array equivale ad &array[0], ma se voglio la metà, scriverò &array[n]

puts("");
}



void print(int n, int* array)
{
for (int i=0; i<n; i++)
	printf("%d ", array[i]);
}
