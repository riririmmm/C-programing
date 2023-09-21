#include <stdio.h>

int Fact(int a);

int main(void) {
	int num;

	printf("계산할 팩토리얼 값: ");
	scanf_s("%d", &num);

	printf("%d! = %d", num, Fact(num));

	return 0;
}

int Fact(int a) {
	if (a == 0 || a == 1)
		return 1;
	else
		a = a * Fact(a - 1);
}