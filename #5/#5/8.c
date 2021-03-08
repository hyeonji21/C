#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int correct_check(int year, int month, int day)
{
	int a, lp;

	lp = Leap_year(year);

	if (month < 1 || month > 12)
		a = 0;
	else {
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
			if (day >= 1 && day <= 31)
				return a = 1;
			else
				a = 0;
		}
		
		else if (month == 2) {
			if (lp == 1) {
				if (day >= 1 && day <= 29)
					a = 1;
				else
					a = 0;
			}
			else {
				if (day >= 1 && day <= 28)
					a = 1;
				else
					a = 0;
			}
		}
		else {
			if (day >= 1 && day <= 30)
				return a = 1;
			else
				a = 0;
		}
	}

	return a;
}


int Leap_year(int year)
{
	int a;
	a = ((year % 4 != 1) ? 0 : (year % 100 != 0) ? 1 : (year % 400 == 0) ? 1 : 0);

	return a;
}


int main(void)
{
	int year = 0, month = 0, day = 0;

	while (1) {

		printf("날짜 (연 월 일)? ");
		scanf("%d %d %d", &year, &month, &day);

		if (correct_check(year, month, day) == 1) {
			printf("입력한 날짜는 %d년 %d월 %d일입니다.", year, month, day);
			break;
		}
		else
			printf("잘못 입력하셨습니다. 유효한 날짜를 입력하세요.");

		printf("\n");
	}

	return 0;
}