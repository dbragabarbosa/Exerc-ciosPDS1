#include <stdio.h>
#include <math.h>
#include <string.h>

//#define

int main ()
{
	char linha[128];
	char letra;
	int i=0;
	
	printf("\ndigite uma linha: \n");
	
	do
	{
		scanf("%c", &letra);
		linha[i] = letra;
		i++;
	} while (letra != '\0' && letra != '\n');
	
	int j;
	int meio;
	
	j = i-2;
	meio = j/2;
	i=0;
	
	int aux=1;
	
	while (j>=meio)
	{
		if (linha[j] != linha[i])
		{
			//printf("\nNAO\n");
			aux=0;
			break; 
		}
		
		j--;
		i++;
	}
	
	if(aux=1)
		printf("\nSIM\n");
	else
		printf("\nNAO\n");

	
	
	return 0;
}