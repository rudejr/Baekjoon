#include <stdio.h>

int main() {

	int r1, s;

	while (1) {
		scanf("%d %d", &r1, &s);
		if ((r1 >= -1000 && r1 <= 1000) && (s >= -1000 && s <= 1000)) break;
	} printf("%d", ((2*s) - r1));

	return 0;
}