#include <stdio.h>
#include <stdlib.h>

int main() {

	int n, x, count = 0;
	int* arr;
	int* temp;

	do {
		scanf("%d %d", &n, &x);
	} while (!((n > 0 && n < 10001) && (x > 0 && x < 10001)));

	arr = (int*)malloc(n * sizeof(int));
	temp = (int*)malloc(n * sizeof(int));

	for (int i = 0; i < n; i++) {
		do {
			scanf("%d", &arr[i]);
		} while (!(arr[i] > 0 && arr[i] < 10001));
	}

	for (int i = 0; i < n; i++) {
		if (x > arr[i]) {
			temp[count] = arr[i];
			count++;
		}
	} for (int i = 0; i < count; i++) printf("%d ", temp[i]);

	return 0;
}