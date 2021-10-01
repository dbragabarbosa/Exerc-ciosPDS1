#include <stdio.h>
#include <math.h>

int main ()
{
	float imcB;
	float imcO;
	
	imcB = 122/(1.84*1.84);
	imcO = 45/(1.76*1.76);
	
	printf ("\nIMC de Brutus = %.2f \n", imcB);
	printf ("\nIMC de Olivia = %.2f \n", imcO);
	
	float PSdeB;
	float PSdeO;
	
	PSdeB = 122-84.64;
	printf ("\n para chegar no peso saudavel, Brutus deve perder %f kg \n", PSdeB);
	
	PSdeO = 57.3056-45;
	printf ("\n para chegar no peso saudavel, Olivia deve ganhar %f kg \n", PSdeO);
	
	return 0;
}

