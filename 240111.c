#include <stdio.h>
#include <stdlib.h>

int main() {

	int n, a, b, x;
	int* arr;

	do {
		scanf("%d", &n);
	} while (!(n > 0 && n <= 100));
	
	arr = (int*)malloc(n * sizeof(int));
	if (arr == NULL) return 1;

	for (int i = 0; i < n; i++) {
		do {
			scanf("%d %d %d", &a, &b, &x);
		} while (!((x > 0 && x <= 100) && (a >= 100 && a <= 1000) && (b >= 100 && b <= 1000)));
		arr[i] = a * (x - 1) + b;
	} for (int i = 0; i < n; i++) printf("%d\n", arr[i]);

	
	free(arr);
	return 0;
}