#include <stdio.h>
#define MAX_SIZE 3

int main() {
    
    int arr[MAX_SIZE] = { 0 };
    int temp;
    do {
        scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    } while(!((arr[0] > 0 && arr[0] <= 1000000)
           && (arr[1] > 0 && arr[1] <= 1000000)
           && (arr[2] > 0 && arr[2] <= 1000000)));
    
    for (int i = 0; i < MAX_SIZE - 1; i++) {
        for (int j = 1; j < MAX_SIZE; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    } for(int i = 0; i < MAX_SIZE; i++) printf("%d ", arr[i]);
    
    return 0;
}