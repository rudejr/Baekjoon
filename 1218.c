#include <stdio.h>

int main() {

	int a, b;

	do {
		scanf("%d %d", &a, &b);
	} while (!((a > 0 && a <= 10000) && (b > 0 && b <= 10000)));

	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d\n", a / b);
	printf("%d", a % b);

	return 0;
}