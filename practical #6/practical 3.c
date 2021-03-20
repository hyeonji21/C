#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Prime(int n)
{
	int i;

	for (i = 2; i <= n; i++) {
		if (n % i == 0) {
			break;
		}
	}

	if (i == n) {
		printf("%d", n);
	}
	else {
		printf("%d", 0);
	}

	return 0;

}

int main(void)
{
	int n;
	scanf("%d", &n);

	Prime(n);

	return 0;
}