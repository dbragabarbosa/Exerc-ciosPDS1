#include <stdio.h>

int main() 
{
	float a = 3.14159, b = 2.71828;
	float x;
	float y;
	
	x = a;
	y = b;
	
	b = x;
	a = y;
	
	printf("\nPI = %f", b);
	printf("\nEULER = %f", a);
	
	return 0;
}
