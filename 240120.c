#include <stdio.h>

int main() {

    int a, b, c;

    do {
        scanf_s("%d %d", &a, &b);
        scanf_s("%d", &c);
    } while (!((a >= 0 && a < 24) && (b >= 0 && b < 60)));

    while (1) {
        if (c >= 60) {
            a++;
            c -= 60;
            if (a >= 24) a -= 24;
        } else break;
    }

    if (b + c >= 60) {
        a++;
        b = (b + c) - 60;
        if (a >= 24) a -= 24;
    } else b += c;

    printf("%d %d", a, b);

    return 0;
}