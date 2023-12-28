#include <stdio.h>

int main() {

	int n;
	do {
		scanf("%d", &n);
	} while (!(n == 0 || n == 1));

	if (n == 0) printf("YONSEI");
	else printf("Leading the Way to the Future");

	return 0;
}