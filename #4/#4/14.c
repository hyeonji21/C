#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	unsigned int bit1 = 0, bit2 = 0;
	unsigned char bit = 0;


	printf("��Ʈ �����? ");
	scanf("%X %c %X", &bit1, &bit, &bit2);
	

	if (bit == '&') 
		printf("%X & %X = %X", bit1, bit2, bit1 & bit2);

	if (bit == '|') 
		printf("%X | %X = %X", bit1, bit2, bit1 | bit2);
	

	if (bit == '^') 
		printf("%X ^ %X = %X", bit1, bit2, bit1 ^ bit2);



	return 0;
}