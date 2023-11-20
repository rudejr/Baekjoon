#include <stdio.h>

int main() {

	int n;

	while (1) {
		scanf("%d", &n);
		if (n > 0 && n <= 100000) break;
	} for (int i = n; i > 0; i--) printf("%d \n", i);

	return 0;
}