#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, i;

	int factorial = 1;

	printf("구하고자 하는 factorial 값 : ");
	scanf("%d", &n);


	printf("%d! = ", n);

	for (i = n; i > 0; i--) {
		if (i != 1) {
			printf("%d*", i);
		}
		else {
			printf("%d", i);
		}

		factorial *= i;

	}

	printf(" = %d", factorial);

	return 0;

}