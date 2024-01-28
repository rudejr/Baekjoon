#include <stdio.h>
#define MAX_SIZE 3

int main() {
    
    int num[MAX_SIZE] = { 0 };
    int temp;
    
    for (int i = 0; i < MAX_SIZE; i++) {
        do {
            scanf("%d", &num[i]);
        } while(!(num[i] >= 0 && num[i] < 100));
    }
    
    for (int i = 0; i < MAX_SIZE - 1; i++) {
        for (int j = 1; j < MAX_SIZE; j++) {
            if(num[i] > num[j]) {
                temp = num[j];
                num[j] = num[i];
                num[i] = temp;
            }
        }
    } printf("%d", num[1]);
    
    return 0;
}