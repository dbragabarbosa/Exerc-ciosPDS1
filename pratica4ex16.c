#include <stdio.h>
#include "pratica4.h"

/*
//------------- EX 14 -------------
int mdc(unsigned int x, unsigned int y)
{
	int menor;
	int maximo;
	
	if(x<y)
		menor=x;
	else 
		menor=y;
	
	for(int i=2; i<=menor; i++)
	{
		if(x%i==0 && y%i++0)
			maximo=i;
	}
	
	return maximo;
}

//------------- EX 15 -------------
int mmc(unsigned int x, unsigned int y)
{
	int maior;
	int minimo;
	
	if(x<y)
		maior=y;
	else
		maior=x;
	
	while(1)
	{
		if(maior%x==0 && maior%y==0)
			break;
		maior++;
	}
	
	return maior;
}
*/

int main ()
{
	int a;
	int b;
	
	do
	{
		printf("\nDigite o primeiro valor: \n");
		scanf("%d", &a);
		
		if(a<=0)
		{
			printf("\nNumero invalido, digite novamente: \n");
		}
	} while(a<=0);
	
	do
	{
		printf("\nDigite o segundo valor: \n");
		scanf("%d", &b);
		
		if(b<=0)
		{
			printf("\nNumero invalido, digite novamente: \n");
		} 
	} while(b<=0);
	
	printf("\nMDC entre %d e %d: %d", a, b, mdc(a, b));
	printf("\nMMC entre %d e %d: %d", a, b, mmc(a, b));
	
	return 0;
}