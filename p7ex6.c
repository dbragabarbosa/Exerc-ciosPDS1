#include <stdio.h>
#include <stdlib.h>

#define TAM_VETOR 60

//FUNCAO PARA GERAR UM ALEATORIO ENTRE 0 E n-1
int random (int n)
{
	return rand()%n;
}

//FUNCAO PARA GERAR ALEATORIOS ENTRE MIN E MAX (INCLUSIVE)
int randInt (int min, int max)    //min=5, max=10
{
	return min + random(max - min + 1);
}

//FUNCAO PARA GERAR ALEATORIOS PONTO FLUTUANTE ENTRE 0 E 1
float randf ()
{
	return (float)rand()/ RAND_MAX;
}

//FUNCAO PARA GERAR ALEATORIOS PONTO FLUTUANTE ENTRE MIN E MAX
float randFloat (float min, float max)
{
	return min + randf()*(max-min);
}


int main ()
{
	int X[TAM_VETOR];
	int Y[TAM_VETOR];
	int U[2*TAM_VETOR];
	int i=0;
	int j=0;
	int tam_atual=1;
	int achei=0;
	int numero;
	
	for (int i=0; i<TAM_VETOR; i++)
	{
		do
		{
			X[i] = rand();
		} while (X[i] < 0 || X[i] > 365);
		
		do
		{
			Y[i] = rand();
		} while (Y[i] < 0 || Y[i] > 365);
	}
	
	for (int i=0; i<TAM_VETOR; i++)
	{
		numero = Y[i];
		achei=0;
		
		for (int j=0; j<tam_atual; j++)
		{
			if(numero == U[i])
			{
				achei = 1;
				break;
			}
		}
		if(!achei)
		{
			U[tam_atual] = numero;
			tam_atual++;
		}
		numero = Y[i];
		achei = 0;
		
		for (int j=0; j<tam_atual; j++)
		{
			if(numero == U[i])
			{
				achei = 1;
				break;
			}
		}
		
		if(!achei)
		{
			U[tam_atual] = numero;
			tam_atual++;
		}
	}
	
	printf("\nVetor Unido\n");
	
	for (int i=0; i<tam_atual; i++)
		printf("\nU[%d] = %d\n", i, U[i]);
	
	return 0;
}