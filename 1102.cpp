#include <stdio.h>

double div(double a, double b) {
    return a / b;
}

int print(double result) {

    printf("%.9lf", result);

    return 0;
}

int main() {

    double num1, num2;

    while (1) {
        scanf("%lf %lf", &num1, &num2);
        if (!(num1 < 0 || num2 > 10)) break;
        else printf("첫번째 수는 0보다 커야하고 두번째 수는 10보다 작아야함 \n");
    } print(div(num1, num2));

    return 0;
}