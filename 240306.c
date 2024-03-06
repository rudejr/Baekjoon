#include <stdio.h>

int main() {

	int n1, n2, n3, n4, n5, n6;

	scanf("%d", &n1);
	scanf("%d", &n2);

	n3 = n1 * (n2 % 10);
	n4 = n1 * ((n2 % 100) / 10);
	n5 = n1 * ((n2 % 1000) / 100);
	n6 = n3 + (n4 * 10) + (n5 * 100);

	printf("%d\n%d\n%d\n%d", n3, n4, n5, n6);

	return 0;
}