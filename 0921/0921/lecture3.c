#include <stdio.h>

int Fact(int a);

int main(void) {
	int num;

	printf("���� �Է��ϼ���: ");
	scanf_s("%d", &num);

	printf("%d", Fact(num));

	return 0;
}

int Fact(int a) {
	if (a == 0 || a == 1)
		return 1;
	else
		a = a * Fact(a - 1);
	return 0;
}