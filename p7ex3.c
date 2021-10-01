#include <stdio.h>
#include <stdlib.h>

#define NUM_ELEMENTOS 9
#define MAX_TAM 10

double media (double v[], int n)
{
	double total;
	int i=0;
	
	for (int i=0; i<n; i++);
	{
		total += v[i];
	}
	
	return (total/n);
}


int main ()
{
	double vet[MAX_TAM];
	int i=0;
	
	for (int i=0; i<MAX_TAM; i++)
	{
		vet[i] = rand();
	}
	
	double aux = media(vet, NUM_ELEMENTOS);
	printf("\n%.2f\n", aux);
	
	return 0;
}