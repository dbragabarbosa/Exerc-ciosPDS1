#include <stdio.h>
#include <stdlib.h>

//#define 

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
	int i=0;
	int a=0;
	int v[99];
	
	while (i<500)
	{
		a = randInt(0,99);
		v[a]++;
	}
	
	int menor = v[a];
	for (int i=0; i<99; i++)
	{
		if (v[i] < menor)
		{
			menor = v[i];
		}
	}
	
	int maior = v[a];
	for (int i=0; i<99; i++)
	{
		if (v[i] > maior)
		{
			maior = v[i];
		}
	}
	
	int diferenca = (maior - menor);
	
	printf("\ndiferenca: %d\n", diferenca);
	
	return 0;
}