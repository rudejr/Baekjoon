#include <stdio.h>

int main() {

	int a, b;
    
	while ( 1 ) {

		scanf("%d", &a);
		while (getchar() != '\n');

		scanf("%d", &b);
		while (getchar() != '\n');

		if ((a > 0 && a <= 100) && (b > 0 && b <= 100)) break;
	} printf("%d", a*b);

	return 0;
}