# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float temp1, temp2;

	printf("È­¾¾¿Âµµ? ");
	scanf("%f", &temp1);

	temp2 = (temp1 - 32) * (5.0 / 9.0);

	printf("%.f F  = %.2f C", temp1, temp2);


	return 0;
}