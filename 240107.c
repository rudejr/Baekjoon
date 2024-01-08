#include <stdio.h>

int main() {

    int n, temp = 0;

    do {
        scanf("%d", &n);
    } while (!(n >= 1 && n <= 10000));

    for (int i = 1; i <= n; i++) temp += i;
    printf("%d", temp);

    return 0;
}