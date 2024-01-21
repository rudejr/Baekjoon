#include <stdio.h>

int main() {

	long long int n, m;

	do {
		scanf("%lld %lld", &n, &m);
	} while (!((n >= 0 && n <= 9999999999) && (m >= 0 && m <= 9999999999)));

	if (n == m) printf("1");
	else printf("0");

	return 0;
}