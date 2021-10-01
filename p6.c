#include <stdio.h>
#include <math.h>

#define delta pow(10, -6)

//------------ EX1

double fatorial (int N)
{
	double fat = 1;
	int i = 2;
	
	while ( i <= N )
	{
		fat = fat*i;
	}
	
	return fat;
}

int main ()
{
	double termo = 1;
	double e = termo;
	int i=1;
	
	while (termo > delta)
	{
		termo = 1.0/fatorial(i);
		
		e += termo;
		
		i++;
	}
	
	printf("\nO numero de Euler eh: %lf, euler\n");
	
	return 0;
}