#include <stdio.h>
#include <math.h>
#include <string.h>

//#define

int main ()
{
	printf("\n");
	
	char nome[128];
	char letra;
	int i=0;
	
	do
	{
		scanf("%c", &letra);
		nome[i] = letra;
		i++;
	} while (letra != '.');
	
	int aux=0;
	
	while (aux<=i)
	{
		if (nome[aux] >= 65 && nome[aux] <= 90)
			printf("%c.", nome[aux]);
		
		aux++;
	}
	
	printf("\n");

	return 0;
}