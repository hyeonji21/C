#include <stdio.h>
#include <string.h>

char ch[100];

int Left_string(char* pointer)
{
	char* p;
	int count = 0;
	for (; *pointer != ' '; pointer++) {
		ch[count] = *pointer;
		count += 1;
	}
	ch[count] = '\0';
	p = ch;
	return (p);
}

int main(void)
{

	char str[100];
	char* pstr;
	printf("입력 문자열 : ");
	gets_s(str, sizeof(str));
	pstr = str;
	printf("왼쪽 단어 : %s\n", Left_string(pstr));  //ch
	printf("\n");

	return 0;

}
