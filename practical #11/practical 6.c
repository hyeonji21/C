/* ���ڹ迭�� �Ű������� �޾Ƽ� ���޵� ���ڿ��� ����(��Hello�� ���ڿ� ����� �μ��� �����ϸ� 5 ��ȯ, strlen()  �Լ��� ������ ���)��
��ȯ�ϴ� �Լ� int length(const char str[]) �Լ��� �����ϰ�, 
������ �Լ��� ����Ͽ� ����ڷκ��� �Է¹��� ���ڿ��� ���̸� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. */

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

	printf("���ڿ��� �Է��ϼ��� : ");
	scanf("%s", str);

	printf("���ڿ��� ���� : %d", length(str));

	return 0;
}