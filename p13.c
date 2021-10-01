/*Alocação dinâmica de matrizes
Escreva um programa para ler um número inteiro n do teclado e criar dinamicamente uma matriz n x n de pontos flutuantes, atribuindo 0.0 a todas as suas 
posições. Uma matriz de pontos flutuantes de dimensões n x n é, na verdade, um vetor de n ponteiros para pontos flutuantes em que cada ponteiro deste vetor 
aponta para um vetor de n pontos flutuantes. Assim, para resolver esse exercício, primeiro aloque dinamicamente um vetor de n posições de ponteiros para 
pontos flutuantes. Depois, para cada posição i deste vetor, aloque um vetor de tamanho n de pontos flutuantes e atribua 0.0 a cada uma das suas posições. 
Por fim, imprima a matriz. 
DESAFIO: faça a alocação da matriz em uma função. */

#include <stdio.h>
#include <stdlib.h>


float **alocaMatriz (int n)
{
	int i=0, j=0;
	
	float **M = (float**)malloc(n * sizeof(float*));
	
	for (i=0; i<n; i++)
	{
		M[i] = (float*)malloc(n * sizeof(float));
	}
	
	//para preencher a matriz com zeros
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
		{
			M[i][j] = 0.7;
		}
	}
	
	return M;
}

void liberaMatriz (float **M, int n)
{
	int i=0;
	
	for (i=0; i<n; i++)
	{
		free(M[i]);
	}
	free(M);
}

void imprimeMatriz (float **M, int n)
{
	int i=0, j=0;
	
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
		{
			printf("%f ", M[i][j]);
		}
		printf("\n");
	}
	
}


int main ()
{
	float **M = NULL;
	
	int n=0;
	scanf("%d", &n);
	
	M = alocaMatriz(n);
	imprimeMatriz(M, n);
	liberaMatriz(M, n);
	
	return 0;
}

