/*���ڹ迭�� �Ű������� �޾Ƽ� ���ڿ� �� �ҹ��ڸ� �빮�ڷ� ��ȯ�ϴ� �Լ��� �����Ͻÿ�(void up(char str[])).
����ڷκ��� �Է¹��� ���ڿ��� �ռ� ������ �Լ��� �̿��Ͽ� ��ȯ�� ���ڿ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. (toupper() �Լ��� �̿����� �� ��)*/

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

	printf("���ڿ��� �Է��ϼ��� : ");
	scanf("%s", str);

	up(str);

	printf("��ȯ�� ���ڿ� : %s", str);

	return 0;
}