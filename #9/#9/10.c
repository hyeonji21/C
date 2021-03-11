/*문자배열을 매개변수로 받아서 아스키 코드 오름차순으로 정렬하는 함수를 정의하시오(void sort(char str[]).
사용자로 부터 입력받은 단어를 앞서 정의한 함수를 이용하여 오름차순으로 정렬하여 출력하는 프로그램을 작성하시오.(p.262)*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sort(char str[])
{
	int i, j;
	int cnt = 0;
	int index_min;
	char temp;

	for (i = 0; i < str[i] != '\0'; i++) {
		cnt += 1;
	}
	for (i = 0; i < cnt - 1; i++) {
		index_min = i;
		for (j = i + 1; j < cnt; j++) {
			if (str[index_min] > str[j]) {
				index_min = j;
			}
		}
		if (i != index_min) {
			temp = str[i];
			str[i] = str[index_min];
			str[index_min] = temp;
		}
	}
}
int main(void)
{
	char str[50];

	printf("문자열을 입력하세요 : ");
	scanf("%s", str);

	sort(str);

	printf("오름차순 정렬 후 : %s", str);

	return 0;
}