#include <stdio.h>

int main(void) {
	int input, year;

	printf("�����̸� 1, �ƴϸ� 0 ���");
	
	printf("�⵵�� �Է��ϼ���: ____ \b\b\b\b\b");
	scanf_s("%d", &input);

	year = ((input % 4 == 0) && !(input % 100 == 0)) || (input % 400 == 0);

	printf("�Է��� %d���� %d�Դϴ�.\n", input, year);

	return 0;
}