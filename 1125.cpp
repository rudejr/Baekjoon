#include <stdio.h>

int main() {

	int n;

	while (1) {

		scanf("%d", &n);
		while (getchar() != '\n');

		if (n > 0 && n <= 100) break;
	}

	for (int i = n; i > 1; i--) {
		for (int j = 0; j < n - i; j++) {
			printf(" ");
		}
		for (int j = 0; j < (2 * i) - 1; j++) {
			printf("*");
		} printf("\n");
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < n - i; j++) {
			printf(" ");
		}
		for (int j = 0; j < (2 * i) - 1; j++) {
			printf("*");
		} printf("\n");
	}

	return 0;
}