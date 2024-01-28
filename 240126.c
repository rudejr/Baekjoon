#include <stdio.h>

int main() {
    
    int a, b, result = 0;
    
    do {
        scanf("%d %d", &a, &b);
    } while(!((a > 0 && a <= 100) && (b > 0 && b <= 100)));

    for (int i = a-1; i > 0; i-=2) {
        if (b == 0) break;
        else {
            b--;
            result++;
        }
    } printf("%d", result);
    
    return 0;
}