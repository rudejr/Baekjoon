#include <stdio.h>
#define MAX_SIZE 5

int main() {

	int arr[MAX_SIZE] = { 0 };
	int v;

	for (int i = 0; i < MAX_SIZE; i++) {
		do {
			scanf("%d", &arr[i]);
		} while (!(arr[i] > 99 && arr[i] < 2001));
	}

	v = arr[MAX_SIZE / 2];
	for (int i = 0; i < MAX_SIZE / 2; i++) if (v > arr[i]) v = arr[i];

	if (arr[MAX_SIZE - 1] > arr[MAX_SIZE - 2]) printf("%d", (v + arr[MAX_SIZE - 2]) - 50);
	else printf("%d", (v + arr[MAX_SIZE - 1]) - 50);

	return 0;
}