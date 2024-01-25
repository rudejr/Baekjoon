#include <stdio.h>

int main() {

	int n0, n1, n2, n3, n4, n5;

	do {
		scanf("%d %d %d %d %d %d", &n0, &n1, &n2, &n3, &n4, &n5);
	} while (!((n0 >= 0 && n0 <= 10) && (n1 >= 0 && n1 <= 10) && (n2 >= 0 && n2 <= 10)
			&& (n3 >= 0 && n3 <= 10) && (n4 >= 0 && n4 <= 10) && (n5 >= 0 && n5 <= 10)));

	printf("%d %d %d %d %d %d", 1 - n0, 1 - n1, 2 - n2, 2 - n3, 2 - n4, 8 - n5);

	return 0;
}