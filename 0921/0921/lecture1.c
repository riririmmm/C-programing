#include <stdio.h>

int isPrime(int num) {
	for (int div = num - 1; div > 1; div--) {
		if (num % div == 0) return 0;
	}
	return 1;
}

int main(void) {
	int num;

	printf("�Ҽ����� Ȯ���� ���� �Է��ϼ���: ");
	scanf_s("%d", &num);

	if (isPrime(num) == 0)
		printf("�ش� ���� �Ҽ��� �ƴմϴ�.\n");
	else
		printf("�ش� ���� �Ҽ��Դϴ�.\n");

	return 0;
}