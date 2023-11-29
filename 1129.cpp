#include <stdio.h>

int main() {

	int n, k;
	int count = 0;

	while (1) {
		
		scanf("%d %d", &n, &k);
		if ((n > 0 && n <= 10000) && (k > 0 && k <= n)) break;
	}

	for (int i = 1; i <= n; i++) {

		if (!(n % i)) count++;
		if (count == k) {
			printf("%d", i);
			return 0;
		}
	} printf("0");

	return 0;
}