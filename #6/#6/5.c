#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_day(int day)
{
	return day & 0x000000ff;
}

int get_month(int day)
{
	return (day >> 8) & 0x000000ff;
}

int get_year(int day)
{
	return (day >> 16) & 0x0000ffff;
}




int main(void)
{
	int day;
	printf("16진수 날짜 (년.월.일) ? ");
	scanf("%x", &day);

	printf("%d.%d.%d", get_year(day), get_month(day), get_day(day));

	return 0;

}