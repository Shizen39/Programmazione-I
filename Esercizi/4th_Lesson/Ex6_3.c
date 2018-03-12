#include<stdio.h>
#include<limits.h> 
#define SIZE 10
int main ()
{
puts("Inserire 10 valori:");
int array[SIZE], i;
for (i=0; i<SIZE; i++)			//scansiono i "SIZE" elementi di array 
	scanf("%d", &array[i]);		//<-

/*I)*/
float somma=0;
for (i=0; i<SIZE; i++)
	somma+=array[i];
printf("\nI) Media dei valori = %g", somma/SIZE);

/*II)*/
int max=0, min=INT_MAX;
for (i=0; i<SIZE; i++){
	if (array[i]>max)
		max = array[i];
	if (array[i]<min)
		min = array[i];
	}
printf("\nII) Valore massimo = %d, Valore minimo = %d", max, min);

/*III) e IV)*/
int m, tmp;
for (i=0; i<SIZE; i++){
	for (m=i+1; m<SIZE; m++){		//Confronto array[i] con il suo successivo (array[m])	
		if (array[i]>array[m]){		//e scambio [i] e [m] se il primo è > del secondo
			tmp=array[i];			//altrimenti continua con il secondo for, incrementando m
			array[i]=array[m];		
			array[m]=tmp;
			}
		}
	}
printf("\nIII) Valori in ordine crescente =  ");
for (i=0; i<SIZE; i++){
	printf("%d ", array[i]);
	}
}
