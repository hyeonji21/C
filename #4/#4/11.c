#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int year, check;
	printf("연도? ");
	scanf("%d", &year);

	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				check = 1;
			}
			else {
				check = 0;
			}
		}
		else {
			check = 1;
		}
	}
	else {
		check = 0;
	}

	if (check == 1) 
		printf("%d년은 윤년입니다.", year);

	else 
		printf("%d년은 윤년이 아닙니다.", year);


	return 0;
}