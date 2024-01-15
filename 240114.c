#include <stdio.h>

int main() {

	int b;

	do {
		scanf("%d", &b);
	} while (!((b >= 1100 && b <= 9900) && (b % 11 == 0)));

	printf("%d", (b*10) / 11);

	return 0;
}