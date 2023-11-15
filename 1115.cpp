#include <stdio.h>
#define MAX_SIZE 5

int main() {

	int n[MAX_SIZE] = { 0 };
	int current = 0;

	while (1) {
		scanf("%d", &n[current]);
		while (getchar() != '\n');

		if (!(n[current] % 5) && n[current] >= 0 && n[current] <= 100) {
			if (n[current] < 40) n[current] = 40;
			current++;
		} if (current == MAX_SIZE) break;
	} current = 0;

	for (int i = 0; i < MAX_SIZE; i++) {
		current += n[i];
	} printf("%d", (current / MAX_SIZE));

	return 0;
}