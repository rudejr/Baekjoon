#include <stdio.h>

int main() {

	int score;

	do {
		scanf("%d", &score );
	} while (!(score >= 0 && score <= 100));

	if (score < 60) printf("F");
	else if (score < 70) printf("D");
	else if (score < 80) printf("C");
	else if (score < 90) printf("B");
	else printf("A");

	return 0;
}