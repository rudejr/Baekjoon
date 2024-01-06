#include <stdio.h>
#include <stdlib.h>

int main() {

	int t, a, b;
	int* arr;

	scanf("%d", &t);
	arr = (int*)malloc(t * sizeof(int));

	if (arr == NULL) return 1;

	for (int i = 0; i < t; i++) {
		do {
			scanf("%d %d", &a, &b);
		} while (!((a > 0 && a < 10) && (b > 0 && b < 10)));
		arr[i] = a + b;
	} for (int i = 0; i < t; i++) printf("%d\n", arr[i]);

	free(arr);
	return 0;
}