#include <stdio.h>
#include <math.h>
#include <string.h>

//#define

int main ()
{
	char linha[128];
	printf("\ndigite uma linha: \n");
	fgets(linha, 128, stdin);
	
	int count = 0;
	
	for (int i = 0; linha[i] != '\0' && linha[i] != '\n'; i++)
	{
		count++;
	}
	
	printf("\nCount: %d \n", count);
	//printf("\ni: %d \n", i);
	
	return 0;
}