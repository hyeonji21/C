// chapter9 ���ڿ� - ����1

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char file[50];
	char name[50];

	printf("���ϸ�? ");
	scanf("%s", file);

	printf("Ȯ����? ");
	scanf("%s", name);

	strcat(file, ".");
	strcat(file, name);


	printf("��ü ���ϸ�: %s", file);

	return 0;

}