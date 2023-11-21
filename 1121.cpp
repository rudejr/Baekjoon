#include <stdio.h>

int main() {

	int a, b, c;

	while (1) {
		scanf("%d %d", &a, &b);
		while (getchar() != '\n');
		scanf("%d", &c);
		if ((a >= 0 && a <= 1000000000) && (b >= 0 && b <= 1000000000) && (c >= 0 && c <= 1000000001)) break;
	}
	if (a + b < c * 2) printf("%d", a + b);
	else printf("%d", (a+b)-(c*2));

	return 0;
}