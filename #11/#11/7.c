/* ����ڷκ��� �� ��¥�� �Է¹޾Ƽ� �� ��¥ ������ ������ ����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
6�� ���α׷��� ����ü�� �̿��Ͻÿ�. */

#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct date {
	int year, month, day;
};

void count(struct date* date1) {

	
	int arr[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };


	if (date1->year % 4 == 0 && date1->year % 100 != 0)
	{
		arr[2] = 29;
	}


	else if (date1->year % 400 == 0)
	{
		arr[2] = 29;
	}


	date1->day++;
	if (date1->day > arr[date1->month])
	{
		date1->day = 1;
		date1->month++;
		if (date1->month == 13) {
			date1->month = 1;
			date1->year++;
		}
	}
}
int main(void)
{
	
	int y1, m1, d1;
	printf("ù��° ��¥ (�� �� ��) �Է�\n");
	scanf("%d %d %d", &y1, &m1, &d1);
	
	int y2, m2, d2;
	printf("�ι�° ��¥ (�� �� ��) �Է�\n");
	scanf("%d %d %d", &y2, &m2, &d2);


	struct date date1 = { y1, m1, d1 };
	struct date date2 = { y2, m2, d2 };

	int cnt = 0;



	while (1)
	{
		cnt++;
		if ((date1.year == date2.year) && (date1.day == date2.day) && (date1.month == date2.month))
			break;
		count(&date1);
	}

	printf("�� ��¥ ������ ������ %d�� �Դϴ�. \n", cnt);

	return 0;
}




