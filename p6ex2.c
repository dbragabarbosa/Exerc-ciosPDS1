#include <stdio.h>
#include <math.h>

#define INF 9999

char calcConceito (int x)
{
	char conceito; 
	
	switch (x)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			conceito = 'F';
			break;
		case 5:
			conceito = 'E';
			break;
		case 6:
			conceito = 'D';
			break;
		case 7:
			conceito = 'C';
			break;
		case 8:
			conceito = 'B';
			break;
		case 9 ... INF :
			conceito = 'A';
	}
	
	return conceito;
}


int main ()
{
	int x;
	
	printf ("\nDIgite sua nota: \n");
	scanf ("%d", &x);
	
	printf("\nconceito: %c\n", calcConceito(x));
	
	return 0;
}