#include <stdio.h>
#include <math.h>
#include <string.h>

//#define

int main ()
{
	char texto[128];
	char c;
	int i=0;
	
	printf("\nDigite seu texto (termiando em ponto final): \n");
	
	do
	{
		//scanf("%c", &c)
		
		c = getc(stdin);
		texto[i] = c;
		i++;
	} while (c != '.');
	
	int j = i-1;
	char inversa[128];
	inversa[i] = '\0';
	i=0;
	
	while (j>=0)
	{
		inversa[j] = texto[i];
		j--;
		i++;
	}
	
	printf("%s\n", inversa);
	
	return 0;
}