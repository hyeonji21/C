/*���ڹ迭�� �Ű������� �޾Ƽ� ���ڿ��� �ҹ��ڸ� �빮�ڷ� Ȥ�� �빮�ڸ� �ҹ��ڷ� ��ȯ�ϴ� �Լ��� �����Ͻÿ�(void updown(char str[], int up)).
�Ű����� up�� 1�̸� �ҹ��ڸ� �빮�ڷ� ��ȯ�ϸ�, up�� 0�̸� �빮�ڸ� �ҹ��ڷ� ��ȯ�Ѵ�.����ڷκ��� �Է¹��� ���ڿ��� �ռ� ������ �Լ��� �̿��Ͽ�  
�ҹ��ڸ� �빮�ڷ� ��ȯ�� ���ڿ��� �빮�ڸ� �ҹ��ڷ� ��ȯ�� ���ڿ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. (toupper()�Լ��� tolower()�Լ��� �̿��� ��)*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

void updown(char str[], int up)
{
	int i;

	for (i = 0; i < str[i] != '\0'; i++) {
		if (up == 1) {
			str[i] = toupper(str[i]);
		}
		if (up == 0) {
			str[i] = tolower(str[i]);
		}
	}
}
int main(void)
{
	char str[50];

	printf("���ڿ��� �Է��ϼ��� : ");
	scanf("%s", str);

	updown(str, 1);
	printf("�ҹ��ڸ� �빮�ڷ� ��ȯ�� ���ڿ� : %s \n", str);

	updown(str, 0);
	printf("�빮�ڸ� �ҹ��ڷ� ��ȯ�� ���ڿ� : %s \n", str);

	return 0;
}