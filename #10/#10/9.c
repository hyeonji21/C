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
			printf("ID�� 8�� �̻��̾�� �մϴ�.\n");
		}
		else if (isdigit(str[0]) != 0) {   // (���ĺ��� �ƴ϶� �����̸�) (����TRUE -> 0 �ƴѰ� ���, ����False -> 0 ���)
			printf("ID�� �����ڷ� �����ؾ� �մϴ�.\n");
		}
		else {
			printf("%s�� ID�� ����� �� �ֽ��ϴ�.\n", str);
			break;
		}
	}
	return 0;
}