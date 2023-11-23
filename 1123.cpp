#include <stdio.h>

int main() {

	int n;

	while (1) {
		scanf("%d", &n);
		while (getchar() != '\n');
		if (n > 0 && n <= 100) break;
	}
	
	for (int i = 1; i <= (n * 2) - 1; i++) {
		if (i <= n - 1) {
			for (int j = i; j < n; j++) printf(" ");
			for (int j = i; j > 0; j--) printf("*");
		}
		if (i == n) {
			for (int j = 0; j < n; j++) printf("*");
		}
		if (i > n) {
			for (int j = 0; j < i - n; j++) printf(" ");
			for (int j = n; j > i - n; j--) printf("*");
		}printf("\n");
	}

	return 0;
}