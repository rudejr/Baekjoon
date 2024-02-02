#include <stdio.h>
#define MAX_SIZE 6

int main() {

	int arr[MAX_SIZE] = { 0 };
	int temp, idx, sum = 0;

	for (int i = 0; i < MAX_SIZE; i++) {
		do {
			scanf("%d", &arr[i]);
		} while (!(arr[i] >= 0 && arr[i] < 101));
	}

	temp = arr[MAX_SIZE / 2];
	idx = MAX_SIZE / 2;
	for (int i = 0; i < MAX_SIZE / 2; i++) {
		if (temp > arr[i]) {
			temp = arr[i];
			idx = i;
		}
	}

	for (int i = 0; i <= MAX_SIZE / 2; i++) if (idx != i) sum += arr[i];
	
	if (arr[MAX_SIZE - 1] > arr[MAX_SIZE - 2]) printf("%d", (sum + arr[MAX_SIZE - 1]));
	else printf("%d", (sum + arr[MAX_SIZE - 2]));

	return 0;
}