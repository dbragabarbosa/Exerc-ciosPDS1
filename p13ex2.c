#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define BUFFER_TAM 5  
  
int main ()
{
	int contBuffer = 0, countTotal = 0;
	char buffer[BUFFER_TAM];
	char *texto = NULL;
	char *textoaux;
	char caractere;
	int i=0;

	while (1)
	{    
		caractere = getche();
		
		if (caractere == '\r')
		{
			caractere = '\n';
			printf("\n");
		}
		
		if (contBuffer < BUFFER_TAM)
		{
			buffer[contBuffer] = caractere;
			contBuffer++;
		}
		
		if (contBuffer == BUFFER_TAM || caractere == '#')
		{
			textoaux = (char*)malloc((countTotal + contBuffer) * sizeof(char))
			
			for (i=0; i<countTotal; i++)
			{
				textoaux[i] = texto[i];
			}
			
			for (i=0; i<contBuffer; i++)
			{
				textoaux[countTotal + i] = buffer[i];
			}
			
			if (texto != NULL)
			{
				free(texto);
			}
			
			texto = textoaux;
			
			countTotal += contBuffer;
			
			contBuffer = 0;
			
		}
		 
		
		if (caractere = '#')
			break;
		
	}
		
	
	texto[countTotal-1] = '\0';
	
	printf("\n\nTexto digitado:\n %s", texto);
	
	free(texto);
	
	return 0;
}