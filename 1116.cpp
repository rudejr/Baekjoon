#include <stdio.h>
#define MAX_SIZE 3

int main() {

	int input[MAX_SIZE] = { 0 };
	int idx = 0;
	int sum = 0;

	while (1) {
		scanf("%d", &input[idx]);
		while (getchar() != '\n');

		if (input[idx] > 0 && input[idx] < 180) {
			sum += input[idx];
			idx++;
		}
		if (idx == MAX_SIZE) break;
	}

	if (sum == 180) {
		if (input[0] == input[1] && input[1] == input[2]) printf("Equilateral");
		else if (input[0] != input[1] && input[0] != input[2] && input[1] != input[2]) printf("Scalene");
		else printf("Isosceles");
	} else printf("Error");

	return 0;
}