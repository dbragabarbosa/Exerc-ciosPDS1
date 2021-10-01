#include <stdio.h>
#include <math.h>

int main ()
{
	float conta;
	float juros;
	
	conta = 789.54;
	
	//2 mes
	
	juros = ((conta*0.56)/100);
	
	conta = conta + juros;
	
	conta = conta + 303.2;
	
	//3 mes
	
	juros = ((conta*0.56)/100);
	
	conta = conta + juros;
	
	conta = conta - 58.25;
	
	//4 mes
	
	juros = ((conta*0.56)/100);
	
	conta = conta + juros;
	
	
	printf ("\nTotal = %.2f \n", conta);
	
	
	return 0;
}
