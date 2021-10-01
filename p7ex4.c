#include <stdio.h>
#include <stdlib.h>

#define NUM_ELEMENTOS 10
#define ELEMENTOS_Z 20

int main ()
{
	int x[NUM_ELEMENTOS];
	int y[NUM_ELEMENTOS];
	int i=0;
	
	printf("\nDigite os valores de x entre espacos: ");
	for (int i=0; i<NUM_ELEMENTOS; i++)
	{
		scanf("%lf", &x[i]);
	}
	
	printf("\nDigite os valores de y entre espacos: ");
	for (int i=0; i<NUM_ELEMENTOS; i++)
	{
		scanf("%lf", &y[i]);
	}
	
	int z[ELEMENTOS_Z];
	int j=0;
	int aux1=0;
	int aux2=0;
	
	for (int j=0; j<ELEMENTOS_Z; j++)
	{
		if (j == 0 || (j%2) == 0)
		{
			z[j] = y[aux1];
			aux1++;
		}
		else 
		{
			z[j] = x[aux2];
			aux2++;
		}
	}
	
	//printf("\nVetor Z: ");
	int a=0;
	int b=0;
	
	for (int a=0; a<ELEMENTOS_Z; a++)
	{
		b = z[a];
		printf ("Z[%d] = %d\n", a, z[a]);
	}
	
	return 0;
}