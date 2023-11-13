#include <stdio.h>

int main() {

	int n;

	while (1) {
		scanf("%d", &n);
		if (n > 0 && n <= 100) break;
	}
	for (int i = 0; i < n; i++) {
		for (int j = n; j > i; j--) {
			printf("*");
		} printf("\n");
	}

	return 0;
}