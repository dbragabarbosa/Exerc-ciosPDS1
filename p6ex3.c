#include <stdio.h>
#include <math.h>

//#define 

int main ()
{
	int n;
	printf("\nDigite o valor de N: \n");
	scanf("%d", &n);
	
	int acum = 1;
	int i = 1;
	int j = 1;
	
	for (int i = 1; i<=n; i++)
	{
		for (int j = 1; j<=i; j++)
		{
			printf("%d ", acum);
			acum++;
		}
		printf("\n");
	}
	return 0;
}