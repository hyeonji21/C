#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Factorial(int n)
{
	int i;
	int factorial = 1;

	for (i = 1; i <= n; i++) {
		factorial *= i;
	}

	printf("%d", factorial);

}
int main(void)
{
	int n;
	scanf("%d", &n);

	Factorial(n);


	return 0;

}