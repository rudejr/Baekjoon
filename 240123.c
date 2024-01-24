#include <stdio.h>

int main() {

	int y;

	do {
		scanf("%d", &y);
	} while (!(y >= 1000 && y <= 3000));

	printf("%d", y - 543);

	return 0;
}