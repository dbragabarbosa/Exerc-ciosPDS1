#include <stdio.h>

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

void main ()
{
	int a;
	a = mdc(18, 12);
	printf("\n%d\n", a);
}

