#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	int month;

	printf("��(month)�� �Է����ּ��� : ");
	scanf("%d", &month);

	if (month < 1 || month > 12) {
		printf("�߸� �Է��ϼ̽��ϴ�.\n");
		return 1;
	}

	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("%d���� ������ ���� 31���Դϴ�.\n", month);
		break;
	case 2:
		printf("%d���� ������ ���� 28���Դϴ�.\n", month);
		break;
	default:
		printf("%d���� ������ ���� 30���Դϴ�.\n", month);
		break;
	}

	return 0;

}