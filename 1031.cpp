#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {

    int num1, num2, result;

    while ( 1 ) {
        scanf("%d %d", &num1, &num2);
        if(!(num1 < 0 || num2 > 10)) break;
        else printf("첫번째 수는 0보다 커야하고 두번째 수는 10보다 작아야함 \n");
    } result = sum(num1, num2);

    printf("%d", result);

    return 0;
}