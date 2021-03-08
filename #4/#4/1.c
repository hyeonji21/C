#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	int month;

	printf("월(month)을 입력해주세요 : ");
	scanf("%d", &month);

	if (month < 1 || month > 12) {
		printf("잘못 입력하셨습니다.\n");
		return 1;
	}

	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("%d월의 마지막 날은 31일입니다.\n", month);
		break;
	case 2:
		printf("%d월의 마지막 날은 28일입니다.\n", month);
		break;
	default:
		printf("%d월의 마지막 날은 30일입니다.\n", month);
		break;
	}

	return 0;

}