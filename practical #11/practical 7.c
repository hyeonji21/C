/*���ڹ迭�� �Ű������� �޾Ƽ� �迭�� ����� ���ڿ� �� �ҹ��ڿ� �빮���� ������ ��� ��ȯ�ϴ� �Լ��� �����Ͻÿ�(int count(const char str[]), int up).
�Ű����� up�� 1�̸� �빮�� ������ ��ȯ�ϸ�, up�� 0�̸� �ҹ����� ������ ��ȯ�Ѵ�.
����ڷκ��� �Է¹��� ���ڿ��� �빮���� ������ �ҹ����� ������ ����ϴ� ���α׷��� �ռ� ������ �Լ��� �̿��Ͽ� �ۼ��Ͻÿ�.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int count(const char str[], int up)
{
	int i;
	int cnt = 0;

	for (i = 0; i < str[i] != '\0'; i++) {
		if (up == 1) {
			if (str[i] >= 'A' && str[i] <= 'Z') {
				cnt += 1;
			}
		}
		else {
			if (str[i] >= 'a' && str[i] <= 'z') {
				cnt += 1;
			}
		}
	}
	return cnt;
}

int main(void)
{
	char str[10];

	printf("���ڿ��� �Է��ϼ��� : ");
	scanf("%s", str);

	printf("�빮���� ���� : %d \n", count(str, 1));
	printf("�ҹ����� ���� : %d \n", count(str, 0));

	return 0;
}