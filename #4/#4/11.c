#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int year, check;
	printf("����? ");
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
		printf("%d���� �����Դϴ�.", year);

	else 
		printf("%d���� ������ �ƴմϴ�.", year);


	return 0;
}