#include <stdio.h>

struct chemical {
	int num;
	int num2;
	char symbol;
	char name[20];
	double weight;
};

int main(void)
{
	struct chemical list = { 6, 6, 'C', "Carbon", 12.0115 };

	printf("원자번호 : %d \n", list.num);
	printf("원소번호 : %d \n", list.num2);
	printf("원소기호 : %c \n", list.symbol);
	printf("원소이름 : %s \n", list.name);
	printf("원자량 : %.4lf \n", list.weight);

	return 0;

}