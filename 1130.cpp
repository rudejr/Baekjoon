#include<stdio.h>

int main() {

	int n;

	while (1) {

		scanf("%d", &n);
		if (n > 0 && n <= 100) break;
	}

	for (int i = 1; i <= (n * 2) - 1; i++) {
		
		if (i <= n) {
			
			for (int j = 0; j < i; j++) printf("*");
			for (int j = 0; j < (n - i) * 2; j++) printf(" ");
			for (int j = 0; j < i; j++) printf("*");
		}
		else {
			
			for (int j = i; j < n * 2; j++) printf("*");
			for (int j = 0; j < (i - n) * 2; j++) printf(" ");
			for (int j = i; j < n * 2; j++) printf("*");
		}printf("\n");
	}

	return 0;
}