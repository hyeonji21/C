# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	unsigned char red, green, blue;
	unsigned int RGB = 0;

	printf("red? ");
	scanf("%hhd", &red);

	printf("green? ");
	scanf("%hhd", &green);

	printf("blue? ");
	scanf("%hhd", &blue);

	RGB = RGB | red;
	RGB = RGB | (green << 8);
	RGB = RGB | (blue << 16);


	printf("RGB »ö»ó: %X", RGB);

	return 0;

}