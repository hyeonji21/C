/*��¥�� ǥ���ϴ� ����ü (����� int year, month, day)�� �����ϰ�, ��¥�� �����ϴ� ����ü ���� today�� �����ϰ� ���� ��¥�� �ʱ�ȭ�Ѵ�. 
�� ������ ����� ��¥ ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�. ���� ������ ���α׷��� ����ü ���.*/

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
