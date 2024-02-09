#include <stdio.h>

int main() {

	int n, result;

	do {
		scanf("%d", &n);
	} while (!(n > 0 && n < 2018));

	result = n - 1;

	if (result != 0) for (int i = 1; i < n; i++) result += n - 1;
	printf("%d", result);

	return 0;
}