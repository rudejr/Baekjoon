#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STRING_SIZE 4

int main() {

	int t, n;
	int* arr;
	char** cArr;

	do {
		scanf("%d", &t);
	} while (!(t > 0 && t < 21));

	arr = (int*)malloc(t * sizeof(int));

	cArr = (char**)malloc(t * sizeof(char*));
	for (int i = 0; i < t; i++) cArr[i] = (char*)malloc(STRING_SIZE * sizeof(char));

	if (arr == NULL || cArr == NULL) return 1;

	for (int i = 0; i < t; i++) {

		do {
			scanf("%d", &arr[i]);
		} while (!(arr[i] > 0 && arr[i] < 1001));

		if (arr[i] / 10 == 0) {
			if (arr[i] * arr[i] % 10 == arr[i]) strcpy(cArr[i], "YES");
			else strcpy(cArr[i], "NO");
		} else if (arr[i] / 100 == 0) {
			if (arr[i] * arr[i] % 100 == arr[i]) strcpy(cArr[i], "YES");
			else strcpy(cArr[i], "NO");
		} else if (arr[i] / 1000 == 0) {
			if (arr[i] * arr[i] % 1000 == arr[i]) strcpy(cArr[i], "YES");
			else strcpy(cArr[i], "NO");
		} else if (arr[i] == 1000) strcpy(cArr[i], "NO");
	}

	for (int i = 0; i < t; i++) printf("%s\n", cArr[i]);

	free(arr);

	for (int i = 0; i < t; i++) free(cArr[i]);
	free(cArr);

	return 0;
}