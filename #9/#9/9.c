/*문자배열을 매개변수로 받아서 문자열의 소문자를 대문자로 혹은 대문자를 소문자로 변환하는 함수를 정의하시오(void updown(char str[], int up)).
매개변수 up이 1이면 소문자를 대문자로 변환하며, up이 0이면 대문자를 소문자로 변환한다.사용자로부터 입력받은 문자열을 앞서 정의한 함수를 이용하여  
소문자를 대문자로 변환된 문자열과 대문자를 소문자로 변환된 문자열을 출력하는 프로그램을 작성하시오. (toupper()함수와 tolower()함수를 이용할 것)*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

void updown(char str[], int up)
{
	int i;

	for (i = 0; i < str[i] != '\0'; i++) {
		if (up == 1) {
			str[i] = toupper(str[i]);
		}
		if (up == 0) {
			str[i] = tolower(str[i]);
		}
	}
}
int main(void)
{
	char str[50];

	printf("문자열을 입력하세요 : ");
	scanf("%s", str);

	updown(str, 1);
	printf("소문자를 대문자로 변환한 문자열 : %s \n", str);

	updown(str, 0);
	printf("대문자를 소문자로 변환한 문자열 : %s \n", str);

	return 0;
}