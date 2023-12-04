#include <stdio.h>

int main() {

	int n1, n2, n3, n4, n5;

	while ( 1 ) {
		scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
		if ((n1 >= 0 && n1 < 10) &&
			(n2 >= 0 && n2 < 10) &&
			(n3 >= 0 && n3 < 10) &&
			(n4 >= 0 && n4 < 10) &&
			(n5 >= 0 && n5 < 10)); break;
	} printf("%d", ((n1 * n1) + (n2 * n2) + (n3 * n3) + (n4 * n4) + (n5 * n5)) % 10);

	return 0;
}