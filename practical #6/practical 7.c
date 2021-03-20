#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Multiply(int m, int n)
{
	int sum;

	if (n == 0) {
		return 0;
	}
	else {
		sum = m + Multiply(m, n - 1);
	}

	return sum;
	
}

int main(void)
{
	int m = 0, n = 0;
	int sum = 0;

	scanf("%d %d", &m, &n);

	sum = Multiply(m, n);

	printf("%d", sum);

	return 0;

}
