# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int get_result(int year, int month, int day)
{
	int result = 0;

	result = result | day;
	result = result | (month << 8);
	result = result | (year << 16);

	return result;

}



int get_day(int date)
{
	return date & 0x000000ff;
}

int get_month(int date)
{
	return (date >> 8) & 0x000000ff;
}

int get_year(int date)
{
	return (date >> 16) & 0x0000ffff;
}



int IncrementDate(int date)
{

	int d = date & 0x000000ff;
	int m = (date >> 8) & 0x000000ff;
	int y = (date >> 16) & 0x0000ffff;


	unsigned int arr[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };


	if (y % 4 == 0 && y % 100 != 0)
	{
		arr[2] = 29;
	}

	else if (y % 400 == 0)
	{
		arr[2] = 29;
	}


	if (d > arr[m] || m < 1 || m > 12 || y < 0)
	{
		printf("날짜 입력 오류입니다.\n");

		return -1;
	}


	d++;
	if (d > arr[m])
	{
		d = 1;
		m++;
		if (m == 13) {
			m = 1;
			y++;
		}
	}

	printf("내일은 %d년 %d월 %d일 입니다.\n", y, m, d);

	return 0;

}

int Count(int day1)
{



	int d1 = day1 & 0x000000ff;
	int m1 = (day1 >> 8) & 0x000000ff;
	int y1 = (day1 >> 16) & 0x0000ffff;

 
	int day;

	int arr[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };


	if (y1 % 4 == 0 && y1 % 100 != 0)
	{
		arr[2] = 29;
	}


	else if (y1 % 400 == 0)
	{
		arr[2] = 29;
	}


	d1++;
	if (d1 > arr[m1])
	{
		d1 = 1;
		m1++;
		if (m1 == 13) {
			m1 = 1;
			y1++;
		}
	}


	day = get_result(y1, m1, d1);

	return day;

}


int main(void)
{
	
	int year, month, day;
	int date;

	int i, cnt = 0;

	printf("년 월 일 ? ");
	scanf("%d%d%d", &year, &month, &day);

	date = get_result(year, month, day);

	
	IncrementDate(date);

	printf("\n");

	int y1, m1, d1;
	printf("첫번째 날짜 (년 월 일) 입력\n");
	scanf("%d %d %d", &y1, &m1, &d1);
	int day1 = get_result(y1, m1, d1);


	int y2, m2, d2;
	printf("두번째 날짜 (년 월 일) 입력\n");
	scanf("%d %d %d", &y2, &m2, &d2);
	int day2 = get_result(y2, m2, d2);


	while (1)
	{
		if (day1 == day2)
			break;
		day1 = Count(day1);

		++cnt;
	}
	
	printf("두 날짜 사이의 날수는 %d일 입니다. \n", cnt);

	
	return 0;

}