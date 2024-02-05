#include <stdio.h>

int main() {
	
	int s0, s1, s2, s3;
	int t0, t1, t2, t3;

	scanf("%d %d %d %d", &s0, &s1, &s2, &s3);
	scanf("%d %d %d %d", &t0, &t1, &t2, &t3);

	if (s0 + s1 + s2 + s3 >= t0 + t1 + t2 + t3) printf("%d", (s0 + s1 + s2 + s3));
	else printf("%d", t0 + t1 + t2 + t3);

	return 0;
}