#include <stdio.h>

int main() {
    
    int a, b, c;
    int temp, count = 0;
    
    do {
        scanf("%d %d %d", &a, &b, &c);
    } while(!((a > 0 && a < 100) && (b > 0 && b < 100) && (c > 0 && c < 100)));
    
    while ( 1 ) {
        if (b - a == 1 && c - b == 1) break;
        if((b - a) > (c - b)) {
            temp = b;
            b = a + 1;
            c = temp;
        } else {
            temp = b;
            b = c - 1;
            a = temp;
        } count++;
    } printf("%d", count);
    
        
    return 0;
}