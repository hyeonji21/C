/*���ڹ迭�� �Ű������� �޾Ƽ� �ƽ�Ű �ڵ� ������������ �����ϴ� �Լ��� �����Ͻÿ�(void sort(char str[]).
����ڷ� ���� �Է¹��� �ܾ �ռ� ������ �Լ��� �̿��Ͽ� ������������ �����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.(p.262)*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sort(char str[])
{
	int i, j;
	int cnt = 0;
	int index_min;
	char temp;

	for (i = 0; i < str[i] != '\0'; i++) {
		cnt += 1;
	}
	for (i = 0; i < cnt - 1; i++) {
		index_min = i;
		for (j = i + 1; j < cnt; j++) {
			if (str[index_min] > str[j]) {
				index_min = j;
			}
		}
		if (i != index_min) {
			temp = str[i];
			str[i] = str[index_min];
			str[index_min] = temp;
		}
	}
}
int main(void)
{
	char str[50];

	printf("���ڿ��� �Է��ϼ��� : ");
	scanf("%s", str);

	sort(str);

	printf("�������� ���� �� : %s", str);

	return 0;
}