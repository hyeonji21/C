// chapter9 문자열 - 과제1

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char file[50];
	char name[50];

	printf("파일명? ");
	scanf("%s", file);

	printf("확장자? ");
	scanf("%s", name);

	strcat(file, ".");
	strcat(file, name);


	printf("전체 파일명: %s", file);

	return 0;

}