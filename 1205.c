#include <stdio.h>

int main() {

	long long n, m;
	while (1) {
		scanf("%lld %lld", &n, &m);
		if ((n >= -2000000000 && n <= 2000000000) && (m >= -2000000000 && m <= 2000000000)) break;
	}

	if (n > 0) {
		if (n > m) printf("%lld", n - m);
		else printf("%lld", (n - m) * (-1));
	} else {
		if (m < n) printf("%lld", n - m);
		else printf("%lld", (n - m) * (-1));
	}
	
	return 0;
}