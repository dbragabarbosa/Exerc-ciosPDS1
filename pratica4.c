#include <stdio.h>
#include <math.h>
#include "pratica4.h"

//------------- EX 1 -------------
float paraMetrosPorSegundo(float v)
{
	float nova;
	nova = v/3.6;
	return nova;
}

//------------- EX 2 -------------
float areaCirculo(float raio)
{
	float area;
	area = 3.141592*raio*raio;
	return area;
}

//------------- EX 3 -------------
int maior3(int n1, int n2, int n3)
{
	if(n1>n2 && n1>n3)
	{
		return n1;
	}
	else if (n2>n1 && n2>n3)
	{
		return n2;
	}
	else if (n3>n2 && n3>n1)
	{
		return n3;
	}
}

//------------- EX 4 -------------
int ehPar(int n)
{
	if(n%2 == 0)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}

//------------- EX 5 -------------
int ehDivisivelPor3ou5(int n)
{
	if(n%3 == 0)
	{
		if(n%5 !=0)
		{
		return 1;
		}
	}
	else if(n%5 == 0)
	{
		if(n%3 != 0)
		{
			return 1;
		}
	}
	else 
	{
		return 0;
	}
}

//------------- EX 6 -------------
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

//------------- EX 7 -------------


//------------- EX 8 -------------
int somaImpares(int N)
{
	int soma;
	soma = 0;
	
	int k = 0;
	
	while (k<=N)
	{
		if(k%2 != 0)
		{
			soma = soma + k;
		}
		
		k++;
	}

	return soma;
}

//------------- EX 9 -------------
double fatorial(int N)
{
	double res;
	res = 1;
	
	int k = 1;
	
	while(k<=N)
	{
		res = res*N;
		k++;
	}

	return res;
}

//------------- EX 10 -------------
int somaNumerosDiv3ou5(int N)
{
	int res;
	res = 0;
	
	int k = 0;
	int aux;
	
	while(k<=N)
	{
		aux = ehDivisivelPor3ou5(k);
		
		if(aux==1)
		{
			res = res + k;
		}
		
		k++;
	}

	return res;
}

//------------- EX 11 -------------
float calculaMedia(int x, int y, int z, int operacao)
{
	if (operacao==1)
	{
		return pow(x*y*z , 1.0/3.0);
	}
	else if (operacao==2)
	{
		return (x+2*y+3*z)/6;
	}
	else if (operacao==3)
	{
		return 3/(1*(x+1)*(y+1)*z);
	}
	else if (operacao==4)
	{
		return (x+y+z)/3;
	}
}

//------------- EX 12 -------------
int numeroDivisores(int N)
{
	int soma;
	soma = 0;
	
	int k = 1;
	
	while(k<=N)
	{
		if(N%k == 0)
		{
			soma++;
		}
		
		k++;
	}

	return soma;
}

//------------- EX 13 -------------
int enesimoFibonacci(int N)
{
	if(N=1)
		return 0;
	if(N=2)
		return 1;
	
	int a=0;
	int b=1;
	int enesimo;
	
	for(int i=3; i<=N; i++)
	{
		enesimo=a+b;
		a=b;
		b=enesimo;
	}
	
	return enesimo;
}


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
		if(x%i==0 && y%i==0)
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

//------------- EX 16 -------------