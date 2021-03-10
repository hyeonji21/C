#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int get_result(int year, int month, int day)
{

	int result = 0;

	result = result | day;
	result = result | (month << 8);
	result = result | (year << 16);

	return result;

}


int IncrementDate(int date)
{
	
	int d = date & 0x000000ff;
	int m = (date >> 8) & 0x000000ff;
	int y = (date >> 16) & 0x0000ffff;

	int day;

	int arr[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if (y % 4 == 0 && y % 100 != 0)
	{
		arr[2] = 29;
	}

	else if (y % 400 == 0)
	{
		arr[2] = 29;
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

	day = get_result(y, m, d);

	return day;

}


int main(void)
{
	int year, month, day;
	int date;
	int day_count, i;
	

	printf("년 월 일 ? "); 
	scanf("%d%d%d", &year, &month, &day);

	date = get_result(year, month, day);


	printf("날수? ");
	scanf("%d", &day_count);

	for (i = 1; i < day_count; i++) {
			date = IncrementDate(date);
	}
	
	int d = IncrementDate(date) & 0x000000ff;
	int m = (IncrementDate(date) >> 8) & 0x000000ff;
	int y = (IncrementDate(date) >> 16) & 0x0000ffff;


	
	printf("%d년 %d월 %d일부터 %d일이 지난 날짜는 %d년%d월%d일입니다.\n", year, month, day, day_count, y, m, d);
	

	return 0;
}