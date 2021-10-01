//contém a implementação das funções cauchy, gumbel e laplace;

#include <math.h>
#include "estatistica.h"

float cauchy ( float x )
{
	float resultado;
	
	resultado = 1/(3.141592*(1+(x*x)));
	
	return resultado;
}

float gumbel ( float x, float u, float b )
{
	float resultado;
	
	float z;
	
	z = (x-u)/b;
	
	resultado = (1/b)*exp(-(z+exp(-z)));
	
	return resultado;
}

float laplace ( float x, float u, float b )
{
	float resultado;
	
	resultado = ( 1 / 2*b ) * exp ( (- fabs (x - u) / b));
	
	return resultado;
}