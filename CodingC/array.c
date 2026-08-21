//max and min of array
#include <stdio.h>

int main() {
    int arr[] = {20, 50, 40, 10, 30};
    int max = arr[0], min = arr[0];
    int n = sizeof(arr) / sizeof(int);
    
    for (int i = 0; i <= n; i++.) {
        if (max < arr[i]) {
            max = arr[i];
        }
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    
    printf("maximum: %d\n", max);
    printf("minimum: %d\n", min);
    
    return 0;
}