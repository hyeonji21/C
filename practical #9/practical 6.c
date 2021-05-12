#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main()
{
	char str[100];
	
	printf("입력 문자열 : ");
	gets_s(str, sizeof(str));

	printf("단어:");

	char* ptr = strtok(str, " ");      

	while (ptr != NULL)              
	{
		printf("\t %s\n", ptr);         
		ptr = strtok(NULL, " ");    
	}

	return 0;

}


