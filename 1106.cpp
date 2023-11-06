#include <stdio.h>

int main() {

	int year;

	while (1) {
		scanf("%d", &year);
		if (!(year < 1 || year > 40000)) break;
	}
	if (!(year % 4) && (year % 100 || !(year % 400))) printf("1");
	else printf("0");

	return 0;
}