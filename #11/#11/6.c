/*���� ������ ���α׷��� Ư�� ��¥���� ������ ����ϴ� ���α׷��̴�. ������ �����Ͽ� ������ ����� �� �ֵ��� �����Ͻÿ�.*/

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
	struct date d = { 2020, 6, 19 };

	inc_date(&d, 100);

	printf("2020�� 6�� 19�Ϻ��� 100�� �Ǵ� ��: %4d�� %2d�� %2d��\n", d.year, d.month, d.day);

	return 0;
}


