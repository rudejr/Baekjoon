#include <stdio.h>

int main() {

	int n;

	while (1) {
		scanf("%d", &n);
		if (n > 0 && n <= 200) break;
	} for (int i = 1; i <= n; i++) printf("Hello World, Judge %d!\n", i);

	return 0;
}