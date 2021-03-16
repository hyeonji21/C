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
			if (d->year % 400 == 0 || d->year % 4 == 0 && d->year % 100 != 0) {
				if (d->day == 29) {
					d->month++;
					d->day = 1;
				}
				else
					d->day++;
				break;
			}
			else {
				if (d->day == 28) {
					d->month++;
					d->day = 1;
				}
				else
					d->day++;
				break;
			}
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
	struct date d1;
	struct date d2;
	int count = 1;

	printf("첫 번째 날짜: ");
	scanf("%d %d %d", &d1.year, &d1.month, &d1.day);
	printf("두 번째 날짜: ");
	scanf("%d %d %d", &d2.year, &d2.month, &d2.day);
	printf("%d년 %d월 %d일과 %d년 %d월 %d일 사이의 날수는 ", d1.year, d1.month, d1.day, d2.year, d2.month, d2.day);

	if (d1.year == d2.year && d1.month == d2.month && d1.day == d2.day) {
		printf("0일입니다.\n");
		return 0;
	}
	while (1) {
		inc_date(&d1, 1);
		if (d1.year == d2.year && d1.month == d2.month && d1.day == d2.day) {
			printf("%d일입니다.\n", count);
			break;
		}
		else
			count++;
	}
	return 0;
}