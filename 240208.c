#include <stdio.h>

int main() {

	int a, b, c;

	do {
		scanf("%d %d %d", &a, &b, &c);
	} while (!((a > 0 && a < 101) && (b > 0 && b < 101) && (c > 0 && c < 101)));

	if (a + b == c) printf("%d+%d=%d", a, b, c);
	else if (a - b == c) printf("%d-%d=%d", a, b, c);
	else if (a * b == c) printf("%d*%d=%d", a, b, c);
	else if (a / b == c) printf("%d/%d=%d", a, b, c);
	else if (a == b + c) printf("%d=%d+%d", a, b, c);
	else if (a == b - c) printf("%d=%d-%d", a, b, c);
	else if (a == b * c) printf("%d=%d*%d", a, b, c);
	else if (a == b / c) printf("%d=%d/%d", a, b, c);

	return 0;
}