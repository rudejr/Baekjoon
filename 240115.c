#include <stdio.h>
#include <string.h>
#define MAX_SIZE 10

int main() {

	char c[MAX_SIZE];
	while (1) {

		fgets(c, sizeof(c), stdin);

		size_t length = strlen(c);
		if (c[length - 1] == '\n') c[length - 1] = '\0';

		if (!(strcmp(c, "SONGDO"))) { printf("HIGHSCHOOL"); break; }
		else if (!(strcmp(c, "CODE"))) { printf("MASTER"); break; }
		else if (!(strcmp(c, "2023"))) { printf("0611"); break; }
		else if (!(strcmp(c, "ALGORITHM"))) { printf("CONTEST"); break; }
	}
	return 0;
}