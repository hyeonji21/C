#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double USD;

	printf("USD? ");
	scanf("%lf", &USD);

	double exchangeRate;

	printf("��/�޷� ȯ��? ");
	scanf("%lf", &exchangeRate);

	printf("USD %.lf = KRW %.2lf", USD, USD * exchangeRate);

	return 0;
}