# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int time;


	printf("��� �ð�(��)? ");
	scanf("%d", &time);


	printf("��� �ð��� %d�ð� %d�� %d���Դϴ�.", time / 3600, time % 3600 / 60, time % 3600 % 60);


	return 0;

}