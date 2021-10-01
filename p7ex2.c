#include <stdio.h>
#include <stdlib.h>

//#define 

int main ()
{
	int i=0;
	double fib[1001];
	
	fib[0]=1;
	fib[1]=1;
	fib[2]=2;
	
	for (int i=3; i<1000; i++)
	{
		fib[i] = (fib[i-1] + fib[i-2]);
	}
	
	
	
	double resultado=0;
	int n=0;
	int x=1;
	while (x>0)
	{
		printf("\nDigite o numero: \n");
		scanf("%d", &n);
		
		if (n<0 || n>1000)
			break;
		
		/*if (n==0)
			resultado=1;
		else if (n==1)
			resultado=1;
		else
			resultado = (fib[n-1]+fib[n-2]);
		*/
		
		resultado = fib[n];
		
		printf("\n%.2f \n", resultado);
	} 
	
	return 0;
}