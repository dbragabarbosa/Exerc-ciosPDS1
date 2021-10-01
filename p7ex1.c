#include <stdio.h>
#include <stdlib.h>

#define TAM_MAX 100

int main ()
{
	double u[TAM_MAX];
	double v[TAM_MAX];
	
	double produto;
	int n;
	
	do 
	{
		printf("\nDIgite a dimensao dos vetores: \n");
		scanf("%d", &n);
		
		if (n > TAM_MAX)
		{
			printf("\nDimensao invalida \n");
		}
		
	} while (n > TAM_MAX);
	
	printf("\nDigite os valores de u entre espacos: ");
	
	int i=0;
	
	for (int i=0; i<n; i++)
	{
		scanf ("%lf", &u[i]);
	}
	
	printf("\nDigite os valores de v entre espacos: ");
	
	for (int i=0; i<n; i++)
	{
		scanf ("%lf", &v[i]);
	}
	
	for (int i=0; i<n; i++)
	{
		produto += (u[i]*v[i]);
	}
	
	printf ("\nO produto escalar eh: %lf \n", produto);
	
	return 0;
}