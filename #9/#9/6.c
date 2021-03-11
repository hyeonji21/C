/* 문자배열을 매개변수로 받아서 전달된 문자열의 길이(“Hello” 문자열 상수를 인수로 전달하면 5 반환, strlen()  함수와 동일한 기능)를
반환하는 함수 int length(const char str[]) 함수를 정의하고, 
정의한 함수를 사용하여 사용자로부터 입력받은 문자열의 길이를 출력하는 프로그램을 작성하시오. */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int length(const char str[])
{
	int i, cnt = 0;

	for (i = 0; i < str[i] != '\0'; i++) {
		cnt += 1;
	}

	return cnt;
}

int main(void)
{
	char str[10];

	printf("문자열을 입력하세요 : ");
	scanf("%s", str);

	printf("문자열의 길이 : %d", length(str));

	return 0;
}