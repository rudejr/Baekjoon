#include <stdio.h>
#define MAX_SIZE 5

int main() {

	int n[MAX_SIZE] = { 0 };
	int idx = 0;

	while (1) {
		scanf("%d", &n[idx]);
        while (getchar() != '\n');

		if (n[idx] >= 0 && n[idx] < 10) idx++;
		if (idx == MAX_SIZE) break;
	}

	for (int i = 0; i < MAX_SIZE - 1; i++) {
		for (int j = i + 1; j < MAX_SIZE; j++) {
			if (n[i] == n[j]) {
				n[i] = 10;
				n[j] = 10;
			}
		}
	}

	for (int i = 0; i < MAX_SIZE; i++) {
		if (n[i] != 10) printf("%d", n[i]);
	}

	return 0;
}