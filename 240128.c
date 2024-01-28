#include <stdio.h>
#include <string.h>
#define MAX_SIZE 51

int main() {

	char c[MAX_SIZE];

	fgets(c, sizeof(c), stdin);

	size_t length = strlen(c);
	if (c[length - 1] == '\n') c[length - 1] = '\0';

	printf("%s??!", c);

	return 0;
}