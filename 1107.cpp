#include <stdio.h>

int main() {

	int k, n, m;

	while (1) {
		scanf("%d %d %d", &k, &n, &m);
		if ((k >= 1 && k <= 1000) && (n >= 1 && n <= 1000) && (m >= 1 && m <= 100000)) break;
	}

	if ((k * n) >= m) printf("%d", (k * n) - m);
	else printf("0");

	return 0;
}