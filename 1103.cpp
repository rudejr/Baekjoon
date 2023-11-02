#include <stdio.h>

int main() {

	int num1, num2;

	while ( 1 ) {
		scanf("%d %d", &num1, &num2);
		if (!(num1 < -10000 || num2 > 10000)) break;
	}

	if (num1 > num2) printf(">");
	else if (num1 < num2) printf("<");
	else printf("==");

	return 0;
}