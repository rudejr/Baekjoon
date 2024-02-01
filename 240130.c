#include <stdio.h>

int main() {
    
    int n;
    
    do {
        scanf("%d", &n);
    } while(!((n >= 4 && n <= 1000) && (n % 4 == 0)));
    
    for (int i = 0; i < n; i+=4) printf("long ");
    printf("int");
    
    return 0;
}