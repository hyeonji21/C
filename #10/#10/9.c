//9
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	char str[128] = "";
	int length;

	while (1) {
		printf("ID? ");
		gets_s(str, sizeof(str));

		length = strlen(str);

		if (length < 8) {
			printf("ID는 8자 이상이어야 합니다.\n");
		}
		else if (isdigit(str[0]) != 0) {   // (알파벳이 아니라 숫자이면) (숫자TRUE -> 0 아닌것 출력, 숫자False -> 0 출력)
			printf("ID는 영문자로 시작해야 합니다.\n");
		}
		else {
			printf("%s는 ID로 사용할 수 있습니다.\n", str);
			break;
		}
	}
	return 0;
}