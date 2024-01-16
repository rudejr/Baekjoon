#include <stdio.h>

int main() {

	int h, i, a, r, c;

	do {
		scanf("%d %d %d %d %d", &h, &i, &a, &r, &c);
	} while (!(((h >= 0 && h <= 100) 
			 && (i >= 0 && i <= 100)
			 && (a >= 0 && a <= 100)
			 && (r >= 0 && r <= 100)
			 && (c >= 0 && c <= 100))));
	printf("%d", ((h * i) - (a * r * c)));

	return 0;
}