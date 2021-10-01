/*
1) Escreva uma função recursiva que calcule a soma dos primeiros n cubos: S = 1³ + 2³ + … + n³.

2) Escreva um procedimento recursivo para imprimir todos os números naturais de 0 até N em ordem crescente.

3) Escreva um procedimento recursivo para imprimir todos os números naturais de 0 até N em ordem decrescente.

4) Crie uma função recursiva que retorne a soma dos elementos de um vetor de inteiros.

5) Crie uma função recursiva que retorne a média dos elementos de um vetor de inteiros.

6) Escreve uma função recursiva que receba por parâmetro dois valores inteiros x e y e calcule e retorne o resultado de x^y (x elevado a y) para o programa principal, considere x e y inteiros positivos. Você não pode usar a função pow.

7) Escreva uma função que recebe uma string como parâmetro e a imprima invertida.

8) Escreva uma função recursiva que receba um valor inteiro x(positivo) e o retorne invertido. Exemplo: se x = 123, a função deve retornar 321.

9) Escreva uma função recursiva que receba um valor inteiro(positivo) em base decimal e o imprima em base binária.

10) Escreva uma função recursiva que retorne o menor elemento em um vetor.
*/

#include <stdio.h>
#include <math.h>

//QUESTÃO 1
int soma_cubos (int n)
{
	if (n == 1)
		return 1;
	else 
		return pow(n, 3) + soma_cubos(n - 1);
}

//QUESTÃO 2
void imprime_natc (int n)
{
	if (n ==0)
	{
		printf("%d ", n);
		return;
	}
	else 
	{
		imprime_natc(n - 1);
		printf("%d ", n);
		return;
	}
}

//QUESTÃO 3
void imprime_natd (int n)
{
	if (n ==0)
	{
		printf("%d ", n);
		return;
	}
	else 
	{
		printf("%d ", n);
		imprime_natd(n - 1);
		return;
	}
	
}

//QUESTÃO 4
int soma_elementos (int *v, int n)
{
	if (n -1 == 0)
		return v[n-1];
	else
		return v[n-1] + soma_elementos(v, n-1);
}

//QUESTÃO 5
float media_elementos (int *v, int i, int n)
{
	if (i == n-1)
		return (float)v[i] / (float)n;
	else \
	return (float)v[i] / (float)n + media_elementos(v, i+1, n);
}

//QUESTÃO 6
int potencia (int x, int y)
{
	if (y ==0)
		return 1;
	else
		return x * potencia(x, y-1);
}

//QUESTÃO 7
void imprime_rstring (char *s)
{
	if (*s == '\0')
		return;
	else 
	{
		imprime_rstring(s + 1);
		printf("%c", *s);
		return;
	}
}

//QUESTÃO 8
int inverte_int (int num, int *soma)
{
	int resto;
	if (num ==0)
		return *soma;
	else
	{
		resto = num%10;
		*soma *= 10;
		*soma += resto;
		inverte_int(num/10, soma);
		return *soma;
	}
}

//QUESTÃO 9 
void imprime_b (int num)
{
	int bit;
	if (num < 2)
		bit = num;
	else if (num%2 == 0)
	{
		imprime_b(num/2);
		bit = 0;
	}
	else 
	{
		imprime_b(num/2);
		bit = 1;
	}
	printf("%d", bit);
}

//QUESTÃO 10
int menor_elemento (int *v, int n)
{
	int atual = v[n-1];
	int menor;
	if (n-1 == 0)
		return v[n-1];
	else 
	{
		menor = menor_elemento(v, n-1);
		if (menor <= atual)
			return menor;
		else
			return atual;
	}
}