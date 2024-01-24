#include <stdio.h>

int main() {

	int n, a, b;

	do {
		scanf("%d %d %d", &n, &a, &b);
	} while (!((n > 0 && n <= 1000000) && (a > 0 && a <= 1000000) && (b > 0 && b <= 1000000)));

	if (a - n < b - n) printf("Bus");
	else if (a - n > b - n) printf("Subway");
	else printf("Anything");

	return 0;
}