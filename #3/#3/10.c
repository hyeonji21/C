# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int time;


	printf("재생 시간(초)? ");
	scanf("%d", &time);


	printf("재생 시간은 %d시간 %d분 %d초입니다.", time / 3600, time % 3600 / 60, time % 3600 % 60);


	return 0;

}