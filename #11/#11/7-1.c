#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct date {
	int year, month, day;
};


void inc_date(struct date* d, int n)
{
	for (int i = 0; i < n; i++) {
		switch (d->month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
			if (d->day == 31) {
				d->month++;
				d->day = 1;
			}
			else
				d->day++;
			break;

		case 12:
			if (d->day == 31) {
				d->year++;
				d->month = 1;
				d->day = 1;
			}
			else
				d->day++;
			break;

		case 2:
			if (d->day == 28) {
				d->month++;
				d->day = 1;
			}
			if (d->year % 4 == 0) {
				if (d->year % 100 == 0) {
					if (d->year % 400 == 0) {
						d->month++;
						d->day = 1;
					}
				}
				else {
					d->month++;
					d->day = 1;
				}
			}
			else
				d->day++;
			break;
		default:
			if (d->day == 30) {
				d->month++;
				d->day = 1;
			}
			else
				d->day++;
			break;
		}
	}
}

int main(void)
{

	int y1, m1, d1;
	printf("첫번째 날짜 (년 월 일) 입력\n");
	scanf("%d %d %d", &y1, &m1, &d1);

	int y2, m2, d2;
	printf("두번째 날짜 (년 월 일) 입력\n");
	scanf("%d %d %d", &y2, &m2, &d2);


	struct date date1 = { y1, m1, d1 };
	struct date date2 = { y2, m2, d2 };

	int cnt = 1;

	while (1) {

		inc_date(&date1, 1);
	

		if ((date1.year == date2.year) && (date1.month == date2.month) && (date1.day == date2.day)) {
			printf("두 날짜 사이의 날수는 %d일 입니다. \n", cnt);
			break;
		}
		else {
			cnt++;
		}
	}

	return 0;
}