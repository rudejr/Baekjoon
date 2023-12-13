#include <stdio.h>

long long factorial(int n);

int main() {

    int n = 20;
    long long result;
    
    while(1) {

        scanf("%d", &n);
        if (n >= 0 && n <= 20) break;
    } result = factorial(n);
    
    printf("%lld\n", result);

    return 0;
}

long long factorial(int n) {
    if (n == 0 || n == 1) return 1;
    else return n * factorial(n - 1);
}