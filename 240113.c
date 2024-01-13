#include <stdio.h>
#include <stdlib.h>

int main() {

	int t, a, b;
	int* arr;
	int* arrA;
	int* arrB;

	scanf("%d", &t);
	arr = (int*)malloc(t * sizeof(int));
	arrA = (int*)malloc(t * sizeof(int));
	arrB = (int*)malloc(t * sizeof(int));

	if (arr == NULL || arrA == NULL || arrB == NULL) return 1;

	for (int i = 0; i < t; i++) {
		do {
			scanf("%d %d", &a, &b);
		} while (!((a > 0 && a < 10) && (b > 0 && b < 10)));
		arrA[i] = a;
		arrB[i] = b;
		arr[i] = a + b;
	} for (int i = 0; i < t; i++) printf("Case #%d: %d + %d = %d\n", i + 1, arrA[i], arrB[i], arr[i]);

	free(arr);
	free(arrA);
	free(arrB);
	return 0;
}