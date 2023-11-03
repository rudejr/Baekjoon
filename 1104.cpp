#include <stdio.h>

int main() {

	int n;

	while ( 1 ) {
		scanf("%d", &n);
		if (!(n < 1 || n > 9)) break;
	} for (int i = 1; i < 10; i++) printf("%d * %d = %d\n", n, i, n*i);

	return 0;
}