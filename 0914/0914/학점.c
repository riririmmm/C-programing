#include <stdio.h>

int main(void) {
	int num;

	printf("������ �Է��ϼ���: ");
	scanf_s("%d", &num);

	if (num > 100 || num < 0)
		printf("������ �߸� �Է��߽��ϴ�.\n");
	else if (num >= 90)
		printf("A����");
	else if (num >= 80)
		printf("B����");
	else if (num >= 70)
		printf("C����");
	else if (num >= 60)
		printf("D����");
	else
		printf("F����");

	return 0;
}