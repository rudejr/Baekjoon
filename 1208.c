#include <stdio.h>

int main() {

	int a, b;
	
	while (1) {
		
		scanf("%d %d", &a, &b);
		if ((a > 1 && a <= 100) && (b > 0 && b <= 100)) break;
	}

	if (a <= b) {
		printf("%d", ((a + b) + (a - b)) - 1);
	} else printf("%d", (b * 2) + 1);

	return 0;
}