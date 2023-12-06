#include <stdio.h>

int main() {

	long long a, b, c;

	while (1) {
		
		scanf("%lld %lld %lld", &a, &b, &c);
		if ((a > 0 && a <= 1000000000000) &&
			(b > 0 && b <= 1000000000000) &&
			(c > 0 && c <= 1000000000000)) break;
	}printf("%lld", a + b + c);

	return 0;
}