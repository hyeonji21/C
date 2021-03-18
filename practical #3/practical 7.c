#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int no = 100, count = 20;
	printf("%d", no > count);  // 1
	printf("%d", no < count * 4); // 0
	printf("%d", (no != 100) || (count >= 20)); // 1
	printf("%d", (no <= 100) && (count > 20)); // 0


	return 0;
}