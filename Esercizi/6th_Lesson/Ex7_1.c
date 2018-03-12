#include<stdio.h>
#include <stdlib.h>

int** mallocMatrix(int, int);
void inputMatrix(int**, int, int);
void printMatrix(int**, int, int);

int main()
{
int m=0, n=0;
scanf ("%d %d",&m,&n);
int** matrix = mallocMatrix(m,n);
inputMatrix(matrix, m, n);
printMatrix(matrix, m, n);
return 0;
}

int** mallocMatrix(int m, int n)
{
int x;
int** matrix;
/* matrix = malloc (m*sizeof(int));
printf ("Ho allocato %lu byte (righe)\n", sizeof(int)*m);*/
for (x=0; x<m; x++)
	matrix[x] = malloc (n*sizeof(int));
printf ("Ho allocato %lu byte (colonne)\n",sizeof(int)*n*x);
return matrix;
}

void inputMatrix(int** matrix, int m, int n)
{
for (int x=0; x<m; x++)
	for (int y=0; y<n; y++)
		{
		printf("Matrice[%d][%d]: ", x, y);
		scanf("%d", &matrix[x][y]);
		}
}

void printMatrix(int** matrix, int m, int n)
{
for (int x=0; x<m; x++){
	printf("Elementi riga n.%d:\n", x+1);
	for (int y=0; y<n; y++)
		{
		printf("%d ", matrix[x][y]);	
		}	
	puts("");
	}
}
