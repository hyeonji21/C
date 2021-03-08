#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int usage;
	printf("월 사용량 (kmh)? ");
	scanf("%d", &usage);

	int a, b;      // 기본요금은 a, 전력량요금은 b


	if (usage <= 300) {
		a = 1000;
		b = usage * 100;
	}
	else {
		a = 5000;
		b = (300 * 100) + (usage - 300) * 200;
	}

	printf("전기 요금 합계: %6d원\n", a + b);
	printf("  - 기본요금:   %6d원\n", a);
	printf("  - 전력량요금: %6d원\n", b);

	return 0;
}