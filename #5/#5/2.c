#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int rectangle(int width, int length)
{
	return (width + length) * 2;

}

int main(void)
{
	int a, b;

	printf("����? ");
	scanf("%d", &a);

	printf("����? ");
	scanf("%d", &b);

	printf("���簢���� �ѷ�: %d", rectangle(a, b));

	return 0;

}