#include <stdio.h>

int main(void)
{

	struct day {
		int yy;
		int mm;
		int dd;
	}birthday;

	printf("생년(4자리) 월(2자리) 일(2자리)를 입력하시오 :");
	scanf_s("%d%d%d", &birthday.yy, &birthday.mm, &birthday.dd);
	printf("생년월일 : %4d년 %2d월 %2d일생 \n", birthday.yy, birthday.mm, birthday.dd);

	return 0;

}