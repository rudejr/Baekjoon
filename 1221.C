#include <stdio.h>

int main() {

	int n, m;

	do {
		scanf("%d %d", &n, &m);
	} while (!((n > 0 && n <= 100) && (m > 0 && m <= 10000)));

	if ((n * 100) >= m) printf("Yes");
	else printf("No");

	return 0;
}