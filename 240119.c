#include <stdio.h>

int main() {
    
    int m, f;
    
    do {
        scanf("%d %d", &m, &f); 
        if((m > 0 && m <= 5) && (f > 0 && f <= 5)) printf("%d\n", m + f);
    } while(!(m == 0 && f == 0));
    
    return 0;
}