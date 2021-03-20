#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Absolute(int count)
{
	if (count > 0) {
		printf("%d", count);
	}
	else {
		printf("%d", -count);
	}

}

int main(void)
{
	int count;
	scanf("%d", &count);

	Absolute(count);


	return 0;

}