/*문자배열을 매개변수로 받아서 배열에 저장된 문자열 중 소문자와 대문자의 개수를 세어서 반환하는 함수를 정의하시오(int count(const char str[]), int up).
매개변수 up이 1이면 대문자 개수를 반환하며, up이 0이면 소문자의 개수를 반환한다.
사용자로부터 입력받은 문자열의 대문자의 개수와 소문자의 개수를 출력하는 프로그램을 앞서 정의한 함수를 이용하여 작성하시오.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int count(const char str[], int up)
{
	int i;
	int cnt = 0;

	for (i = 0; i < str[i] != '\0'; i++) {
		if (up == 1) {
			if (str[i] >= 'A' && str[i] <= 'Z') {
				cnt += 1;
			}
		}
		else {
			if (str[i] >= 'a' && str[i] <= 'z') {
				cnt += 1;
			}
		}
	}
	return cnt;
}

int main(void)
{
	char str[10];

	printf("문자열을 입력하세요 : ");
	scanf("%s", str);

	printf("대문자의 개수 : %d \n", count(str, 1));
	printf("소문자의 개수 : %d \n", count(str, 0));

	return 0;
}