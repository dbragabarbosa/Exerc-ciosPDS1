#include <stdio.h>
#include "pratica4.h"

float pesoIdeal(float h, char sexo)
{
	if ( sexo == 'M' )
	{
		return (72.7*h)-58;
	}
	else 
	{
		return (62.1*h)-44.7;
	}
}

void main ()
{
	char sexo;
	printf("\nDigite o sexo: (M para masculino e F para feminino) \n");
	scanf("%c", &sexo);
	fflush(stdin);
	
	float altura;
	printf("\nDigite a altura: \n");
	scanf("%f", &altura);
	fflush(stdin);
	
	float peso;
	printf("\nDIgite seu peso: \n");
	scanf("%f", &peso);
	fflush(stdin);
	
	float peso_id;
	peso_id = pesoIdeal(altura, sexo);
	
	float dif;
	
	if(peso_id>peso)
	{
		dif = peso_id - peso;
		printf("\nVoce deve perder %f kgs \n", dif);
	}
	else if(peso_id<peso)
	{
		dif = peso - peso_id;
		printf("\nVoce deve ganhar %.2f kgs \n", dif);
	}
}