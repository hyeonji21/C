/*문자배열을 매개변수로 받아서 문자열 중 소문자를 대문자로 변환하는 함수를 정의하시오(void up(char str[])).
사용자로부터 입력받은 문자열을 앞서 정의한 함수를 이용하여 변환된 문자열을 출력하는 프로그램을 작성하시오. (toupper() 함수를 이용하지 말 것)*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void up(char str[])
{
	int i;
	for (i = 0; i < str[i] != '\0'; i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] = str[i] - 32;
		}
	}
}
int main(void)
{
	char str[50];

	printf("문자열을 입력하세요 : ");
	scanf("%s", str);

	up(str);

	printf("변환된 문자열 : %s", str);

	return 0;
}