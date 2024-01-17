#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 1000001

int main() {

	char str[MAX_SIZE] = { 0 };
	int count = 0;
	int temp, sum = 0;

	fgets(str, sizeof(str) - 1, stdin);
	str[strcspn(str, "\n")] = '\0';
	
	if (strlen(str) > 1) count++;
	for (int i = 0; str[i] != '\0'; i++) sum += str[i] - '0';

	while (1) {
		
		if (sum < 10) break;
		
		temp = sum;
		sum = 0;
		
		while (1) {
			sum += (temp % 10);
			temp /= 10;
			if (temp == 0) break;
		} count++;
	}

	if (sum % 3 == 0) {
		printf("%d\n", count);
		printf("YES");
	} else {
		printf("%d\n", count);
		printf("NO");
	}

	return 0;
}

// ExtraRecord_Dynamic Allocation
void extraRecord() {
    char* str = (char*)malloc(MAX_SIZE * sizeof(char));
	int count = 0;
	int temp, sum = 0;

	if (str == NULL) return 1;

	fgets(str, sizeof(str) - 1, stdin);							 // input : 3333
	str[strcspn(str, "\n")] = '\0';

	if (strlen(str) > 1) count++;								 // count == 1
	for (int i = 0; str[i] != '\0'; i++) sum += str[i] - '0';	 // sum == 12

	while (1) {

		if (sum < 10) break;		// false

		temp = sum;					// temp == 12, sum == 12
		sum = 0;					// sum == 0

		while (1) {
			sum += (temp % 10);		// 0 += (12 % 10), sum == 2  // 2 += (1 % 1), sum == 3
			temp /= 10;				// temp == 1				 // temp == 0
			if (temp == 0) break;	// false                     // ture
		} count++;					// count == 2
	}

	if (sum % 3 == 0) {				// true
		printf("%d\n", count);		// count == 2
		printf("YES");				// output : YES
	}
	else {
		printf("%d\n", count);
		printf("NO");
	}

	free(str);
	return 0;
}