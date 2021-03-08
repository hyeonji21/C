#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double m2;
	const double area = 0.3025;

	printf("아파트의 면적(제곱미터)? ");
	scanf("%lf", &m2);

	printf("%.2lf 제곱미터 = %.2lf 평", m2, m2 * area);


	return 0;
}