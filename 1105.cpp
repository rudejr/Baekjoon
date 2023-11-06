#include <stdio.h>

int main() {
	
	int n;

	while (1) {
		scanf("%d", &n);
		if (!(n > 100000)) break;
	} for (int i = 1; i <= n; i++) printf("%d\n", i);
	
	return 0;
}