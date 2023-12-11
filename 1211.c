#include <stdio.h>

int main() {

	long long a, b;

	while (1) {
		scanf("%lld %lld", &a, &b);
		if ((a > 0 && a <= 100000) && (b > 0 && b <= 100000)) break;
	} printf("%lld", ((a + b) * (a - b)));

	return 0;
}