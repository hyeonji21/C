#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double temp, result;
	char letter;
	

	printf("¿Âµµ? ");
	scanf("%lf %c", &temp, &letter);

	if (letter == 'C') {
		result = temp * 1.8 + 32;
		printf("%.2lf C == %.2lf F", temp, result);
	}

	else if (letter == 'F') {
		result = (temp - 32) * (5.0 / 9.0);
		printf("%.2lf F == %.2lf C", temp, result);
	}
		

	
	return 0;

}