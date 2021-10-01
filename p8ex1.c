/*
1.1) Faça um programa para preencher uma matriz m x n com números aleatórios entre 1 e k. 
Os valores de m, n e k devem ser lidos do teclado. Como ainda não aprendemos alocação dinâmica de memória,
crie uma matriz estaticamente com os limites superiores de m e n. Considere que m e n não podem ser maiores que 100. 
Não permita que o usuário entre com valores inválidos para m, n e k.

1.2) Procure por sequências com pelo menos três números consecutivos iguais tanto nas linhas quanto nas colunas da matriz.
Substitua todos os números que estão nessas sequências por 0.

1.3) Imprima na tela o número de zeros que a matriz possui depois do passo 1.2.

1.4) Altere a matriz colocando todos os zeros nas primeiras linhas das suas respectivas colunas. 
Preserve a ordem dos outros números dentro da coluna. Imprima a matriz final.

1.5) Repita os procedimentos descritos nos itens 1.2, 1.3 e 1.4 até que a matriz final não tenha sequências 
de tamanho maior ou igual a 3 de números consecutivos maiores que zero. 
Para a matriz do item anterior, o seu programa deve realizar as seguintes operações:
a)Encontrar sequências de tamanho maior ou igual a três de números maiores que zero e substituir os números por zeros:
b)Colocar os zeros no topo da matriz:
c)Encontrar sequências de tamanho maior ou igual a três de números maiores que zero e substituir os números por zeros:
d)Colocar os zeros no topo da matriz:
e)Não há mais sequências de tamanho maior que 3 de números maiores que zero. Imprima a matriz final e termine o programa.

*/

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

void zeraMatriz (int M[][100], int m, int n)
{
	int i=0;
	int j=0;
	
	for (int i=0; i<m; i++)
	{
		for (int j=0; j<n; j++)
		{
			M[i][j] = 0;
		}
	}
}

void imprimeMatriz (int M[][100], int m, int n)
{
	int i=0;
	int j=0;
	
	for (int i=0; i < m; i++)
	{
		for (int j=0; j < n; j++)
		{
			printf("%5d", M[i][j]);
		}
		printf("\n");
	}
}


void zera_3consec(int M[][100], int m, int n);
{
	int i=0;
	int j=0;
	int m_linha[100][100];
	int m_coluna[100][100];
	int consec;
	int anterior;
	
	for (int i=0; i < m; i++)
	{
		consec = 0;
		anterior = -1;
		for (int j=0; j < n; j++)
		{
			m_linha[i][j] = M[i][j];
			if (j != n-1)
			{
				if (m_linha[i][j] != anterior)
				{
					if (consec >= 3)
					{
						for (int x = consec; x > 0; x--)
							m_linha[i][j-x] = 0;
					}
					else 
						consec++;
				}
				else
				{
					if (m_linha[i][j] != anterior)
					{
						if (consec >= 3)
						{
							for (int x = consec; x > 0; x--)
								m_linha[i][j-x] = 0;
						}
						else if (consec >= 2)
						{
							for (int x = consec; x >=0; x--)
								m_linha[i][j-x] = 0;
						}
					}
				}
				anterior = M[i][j];
			}
		}
		for (int j=0; j < n; j++)
		{
		consec = 0;
		anterior = -1;
		for (int i=0; i < m; i++)
		{
			m_coluna[i][j] = M[i][j];
			if (i != m-1)
			{
				if (m_coluna[i][j] != anterior)
				{
					if (consec >= 3)
					{
						for (int x = consec; x > 0; x--)
							m_coluna[i-x][j] = 0;
					}
					else 
						consec++;
				}
				else
				{
					if (m_coluna[i][j] != anterior)
					{
						if (consec >= 3)
						{
							for (int x = consec; x > 0; x--)
								m_coluna[i-x][j] = 0;
						}
						else if (consec >= 2)
						{
							for (int x = consec; x >=0; x--)
								m_coluna[i-x][j] = 0;
						}
					}
				}
				anterior = M[i][j];
			}
		}
		
		printf("\nMatriz com as linhas zeradas: \n");
		imprimeMatriz (m_linha, m, n);
		printf("\nMatriz com as colunas zeradas: \n");
		imprimeMatriz (m_coluna, m, n);
	}
	
}

int main ()
{
	int m, n, k;
	do 
	{
		printf("\nDIgite um valor para m: \n");
		scanf("%d", &m);
		printf("\nDIgite um valor para n: \n");
		scanf("%d", &n);
		printf("\nDIgite um valor para k: \n");
		scanf("%d", &k);
	} while (m>100 || n>100 || m<1 || n<1 || k<1);
	
	int matriz[m][n];
	zeraMatriz (matriz, m, n);
	imprimeMatriz (matriz, m, n);
	
	int i=0;
	int j=0;
	
	//preenchendo a matriz com aleatórios entre 1 e k
	for (int i=0; i<m; i++)
	{
		for (int j=0; j<n; j++)
		{
			matriz[i][j] = random(k+1);
		}
	}
	
	//zerando sequencias com 3 consecutivos iguais
	int consec; 
	int anterior;
	
	for (int i=0; i < m; i++)
	{
		consec = 0;
		anterior = -1;
		for (int j=0; j<n; j++)
		{
			
		}
	}
	
	//zera_3consec(matriz, m, n);
	
	
	
	return 0;
}