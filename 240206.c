#include <stdio.h>

int main() {

	int l, a, b, c, d;
	int count1 = 1;
	int count2 = 1;

	do {
		scanf("%d", &l);
		scanf("%d", &a);
		scanf("%d", &b);
		scanf("%d", &c);
		scanf("%d", &d);
	} while (!((l > 1 && l < 41) && (a > 0 && a < 1001)
			 && (b > 0 && b < 1001) && (c > 0 && c < 101) && (d > 0 && d < 101)));

	while (1) {
		if (a <= c * count1) break;
		else count1++;
	}

	while (1) {
		if (b <= d * count2) break;
		else count2++;
	}

	if (count1 >= count2) printf("%d", l - count1);
	else printf("%d", l - count2);

	return 0;
}