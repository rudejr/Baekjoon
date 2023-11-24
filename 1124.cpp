#include <stdio.h>

int main() {

	int m, d;

	while (1) {

		scanf("%d", &m);
		while (getchar() != '\n');

		scanf("%d", &d);
		while (getchar() != '\n');

		if ((m > 0 && m <= 12) && (d > 0 && d <= 31)) break;
	}

	if (m == 2 && d == 18) printf("Special");
	else if ((m < 2) || (m <= 2 && d < 18)) printf("Before");
	else printf("After");

	return 0;
}