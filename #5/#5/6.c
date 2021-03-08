#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int get_red(int RGB)
{
	return RGB & 0x0000ff;
}

int get_green(int RGB)
{
	return (RGB >> 8) & 0x0000ff;
}

int get_blue(int RGB)
{
	return (RGB >> 16) & 0x0000ff;
}


int main(void)
{
	int RGB;
	printf("RGB »ö»ó? ");
	scanf("%x", &RGB);

	printf("RGB %XÀÇ red: %d, green: %d, blue: %d", RGB, get_red(RGB), get_green(RGB), get_blue(RGB));

	return 0;

}