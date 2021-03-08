#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define in 2.54


int main(void)
{
	double writeIn;

	printf("±Ê¿Ã(in)? ");
	scanf("%lf", &writeIn);
	
	printf("%.2lf in = %.2lf cm", writeIn, in * writeIn);


	return 0;
}