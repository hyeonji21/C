#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double yd;

	printf("±Ê¿Ã(yd)? ");
	scanf("%lf", &yd);

	printf("%.lf yd = %lf m", yd, 0.9144 * yd);


	return 0;
}