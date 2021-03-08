#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double USD;

	printf("USD? ");
	scanf("%lf", &USD);

	double exchangeRate;

	printf("원/달러 환율? ");
	scanf("%lf", &exchangeRate);

	printf("USD %.lf = KRW %.2lf", USD, USD * exchangeRate);

	return 0;
}