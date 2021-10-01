#include <stdio.h>
#include <stdlib.h>

//#define 

int main ()
{
	printf("\nDigite o numero de elementos: \n");
	int n=0;
	scanf("%d", &n);
	
	int x[n];
	int y[n];
	int i=0;
	
	printf("\nDigite os valores de x entre espacos: \n");
	for (int i=0; i<n; i++)
	{
		scanf("%lf", &x[i]);
	}
	
	int j=0;
	int aux = n;
	for (int j=0; j<n; j++)
	{
		y[j] = x[aux];
		aux--;
	}
	
	int a=0;
	for (int i=0; i<n; i++)
	{
		printf("\nY[%d] = %d\n", i, y[i]);
	}
	
	return 0;
}