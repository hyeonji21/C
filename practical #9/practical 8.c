#include <stdio.h>
#include <string.h>

char* p;

int Right_string(char* pointer, int length)
{


	for (int i = length; i >= 0; i--) {
		if (pointer[i] == ' ') {
			p = &pointer[i];
			break;
		}
	}
	return (p);
}

int main(void)
{

	char str[100];
	char* pstr;
	printf("입력 문자열 : ");
	gets_s(str, sizeof(str));
	pstr = str;

	int length = strlen(str);

	printf("오른쪽 단어 :%s\n", Right_string(pstr, length));  
	printf("\n");


	return 0;

}