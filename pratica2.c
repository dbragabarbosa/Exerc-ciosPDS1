//contém a função main e as chamadas das funções cauchy, gumbel e laplace

#include <stdio.h>
#include "estatistica.h"

	int main ()
	{
		float x = -2;
		float resultado_cauchy = cauchy ( x );
		printf ("\nResultado cauchy: %f \n", resultado_cauchy);
		
		float xis = 0;
		float u = 0.5;
		float b = 2;
		float resultado_gumbel = gumbel (xis,u,b);
		printf ("\nResultado gumbel: %f \n", resultado_gumbel);
		
		float resultado_laplace = laplace (-6, -5, 4);
		printf("\nResultado laplace: %f \n", resultado_laplace);
		
		return 0;
	}