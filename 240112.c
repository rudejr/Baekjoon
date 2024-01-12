#include <stdio.h>

int main() {

    int a, b;

	do {
		scanf("%d", &a);
        scanf("%d", &b);
	} while (!((a > 0 && a < 10) && (b > 0 && b < 10)));

    printf("%d", a+b);

	return 0;
}