# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	char letter;
	int result;

	printf("���� 1���� �Է����ּ��� : ");
	scanf("%c", &letter);
	
	result = (letter >= 'A' && letter <= 'Z') || (letter >= 'a' && letter <= 'z') ? 0 : 1;
	printf("%d \n", result);


	return 0;
}