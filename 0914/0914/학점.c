#include <stdio.h>

int main(void) {
	int num;

	printf("점수를 입력하세요: ");
	scanf_s("%d", &num);

	if (num > 100 || num < 0)
		printf("점수를 잘못 입력했습니다.\n");
	else if (num >= 90)
		printf("A학점");
	else if (num >= 80)
		printf("B학점");
	else if (num >= 70)
		printf("C학점");
	else if (num >= 60)
		printf("D학점");
	else
		printf("F학점");

	return 0;
}