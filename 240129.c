#include <stdio.h>
#define MAX_SIZE 9


int main() {
    
    int arr[MAX_SIZE] = { 0 };
    int max = 0;
    
    for (int i = 0; i < MAX_SIZE; i++) {
        do {
            scanf("%d", &arr[i]);
        } while(!(arr[i] > 0 && arr[i] < 100));
    }
    
    for (int i = 0; i < MAX_SIZE; i++) if (max < arr[i]) max = arr[i];
    for (int i = 0; i < MAX_SIZE; i++) {
        if (max == arr[i]) {
            printf("%d\n%d", max, i+1);
            break;
        }
    }
    
    return 0;
}