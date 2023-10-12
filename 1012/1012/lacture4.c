#include <stdio.h>

void swap(int* p1, int* p2) {
	int c = *p1;
	*p1 = *p2;
	*p2 = c;
}

int main() {
	int a = 10, b = 25;
	printf("a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);

	return 0;
}