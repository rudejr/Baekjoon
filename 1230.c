#include <stdio.h>
#include <string.h>
#define MAX_SIZE 10

int main() {

	int check;
	char c[MAX_SIZE];

	do {
		check = 0;
		fgets(c, sizeof(c), stdin);

		size_t length = strlen(c);
		if (c[length - 1] == '\n') c[length - 1] = '\0';

		if (!(strcmp(c, "NLCS"))) printf("North London Collegiate School");
		else if (!(strcmp(c, "BHA"))) printf("Branksome Hall Asia");
		else if (!(strcmp(c, "KIS"))) printf("Korea International School");
		else if (!(strcmp(c, "SJA"))) printf("St. Johnsbury Academy");
		else check = 1;
	} while (check);

	return 0;
}