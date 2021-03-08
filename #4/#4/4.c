#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int a, b, change;
	printf("두 정수를 입력하세요 : ");
	scanf("%d %d", &a, &b);

	int sum1 = 0, sum2 = 0;
	int i;

	if (a > b) {
		change = a;
		a = b;
		b = change;
	}

	for (i = a; i <= b; i++) {
		if (i % 2 != 0)
			sum1 += i;
		else
			sum2 += i;
	}

	printf("홀수만을 합한 값: %d \n", sum1);
	printf("짝수만을 합한 값: %d \n", sum2);
	
	return 0;

}