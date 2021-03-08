# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	unsigned int data, byte0, byte1, byte2, byte3, bit_mask;

	bit_mask = 0xff;

	printf("16진수로 데이터를 입력하세요 : ");
	scanf("%x", &data);

	byte0 = bit_mask & data;
	byte1 = bit_mask & (data >> 8);
	byte2 = bit_mask & (data >> 16);
	byte3 = bit_mask & (data >> 24);


	printf("byte 0 : %x \n", byte0);
	printf("byte 1 : %x \n", byte1);
	printf("byte 2 : %x \n", byte2);
	printf("byte 3 : %x \n", byte3);

	return 0;

}