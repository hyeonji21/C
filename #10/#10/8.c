//8
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[128] = "";
	int key = 0;

	printf("���ڿ�? ");
	gets_s(str, sizeof(str));

	int length = strlen(str);

	printf("��ȣ Ű(����)? ");
	scanf("%d", &key);

	for (int i = 0; i < length; i++) {
		if ((str[i] >= 65 && str[i] <= 90 - key) || (str[i] >= 97 && str[i] <= 122 - key))
			str[i] += key;
		else
			str[i] -= (26 - key);
	}

	printf("��ȣȭ�� ���ڿ�: %s\n", str);

	return 0;
}