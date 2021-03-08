# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int mass1, mass2;       // mass1 : 용매의 질량, mass2 : 용질의 질량
	
	printf("용매(g)? ");
	scanf("%d", &mass1);

	printf("용질(g)? ");
	scanf("%d", &mass2);


	printf("농도: %.2lf %%", (double) mass2 / (mass1 + mass2) * 100);


	return 0;
}