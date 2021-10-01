#include <stdio.h>
#include <math.h>
#include <string.h>

//#define

int main ()
{
	char string[128];
	printf("\nDigite uma linha: \n");
	
	char letra;
	int i=0;
	
	do
	{
		scanf("%c", &letra);
		
		if (letra>=97 && letra <=122)
		{
			letra = letra-32;
		}
		
		string[i] = letra;
		i++;
		
	} while (letra != '\0' && letra != '\n');
	
	printf("\nLinha em maiusculo: %s \n", string);
	
	return 0;
}