#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_year(int year)
{
	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				return 1;
			}
			else
				return 0;
		}
		else
			return 1;
	}
	else
		return 0;
}


int main(void)
{
	int i, count = 0;

	for (i = 2000; i <= 2100; i++) {
		if (get_year(i) == 1) {
			printf("%d ", i);
			count += 1;
			if (count % 10 == 0)
				printf("\n");
		}
	}

	return 0;
}