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

int main(void)
{
	int year, month, day;
	int result;

	printf("³â ¿ù ÀÏ ? ");
	scanf("%d%d%d", &year, &month, &day);
	
	printf("%08x", get_result(year, month, day));


	return 0;
 
}