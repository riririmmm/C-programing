#include <stdio.h>

int main(void) {
	int input;

	printf("���� �Է��ϼ���: ");
	scanf_s("%d", &input);

	if (input % 2 == 0) {
		printf("�Է��� %d��(��) ¦���Դϴ�.\n", input);
	}
	else {
		printf("�Է��� %d��(��) Ȧ���Դϴ�.\n", input);
	}
	return 0;
}