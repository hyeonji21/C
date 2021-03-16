/*날짜를 표현하는 구조체 (멤버는 int year, month, day)를 정의하고, 날짜를 저장하는 구조체 변수 today를 선언하고 오늘 날짜로 초기화한다. 
이 변수에 저장된 날짜 정보를 출력하는 프로그램을 작성하시오. 다음 페이지 프로그램의 구조체 사용.*/

#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct date {
	int year, month, day;
};

int main(void)
{
	struct date today = { 2020, 6, 14 };

	printf("%d %d %d ", today.year, today.month, today.day);

	return 0;

}
