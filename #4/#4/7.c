#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i = 1;
	
	while (i <= 12) {

		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
			printf("%d���� ������ ���� 31���Դϴ�.\n", i);

		else if (i == 2)
			printf("%d���� ������ ���� 28���Դϴ�.\n", i);

		else
			printf("%d���� ������ ���� 30���Դϴ�.\n", i);

		i++;
	}


	return 0;
}