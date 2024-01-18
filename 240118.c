#include <stdio.h>
#include <stdlib.h>

int main() {

	int t, a, b;
	int* arr;

	do {
		scanf("%d", &t);
	} while (!(t > 0 && t <= 1000000));

	arr = (int*)malloc(t * sizeof(int));
	if (arr == NULL) return 1;

	for (int i = 0; i < t; i++) {
		do {
			scanf("%d %d", &a, &b);
		} while (!((a > 0 && 1 <= 1000) && (b > 0 && b <= 1000)));
		arr[i] = a + b;
	} for (int i = 0; i < t; i++) printf("%d\n", arr[i]);

	free(arr);
	return 0;
}