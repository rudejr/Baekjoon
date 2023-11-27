#include <stdio.h>

int main() {

	int y, m;

	while (1) {

		scanf("%d", &y);
		while (getchar() != '\n');
		scanf("%d", &m);
		while (getchar() != '\n');

		if ((y >= 0 && y <= 50) && m >= y && m <= 50) break;
	} printf("%d", m+(m - y));

	return 0;
}