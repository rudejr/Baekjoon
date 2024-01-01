#include <stdio.h>
#define STD 1946

int main() {

	int n;

	do {
		scanf("%d", &n);
	} while (!(n >= 1946 && n <= 1000000));

	printf("%d", n - STD);

	return 0;
}