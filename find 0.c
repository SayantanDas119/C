#include <stdio.h>

int main() {
    int n, i;
    int Count = 0;
    int arr[n];
    printf("Enter array Size: ");
    scanf("%d", &n);

    
    printf("Enter elements of array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    for ( i = 0; i < n; i++) {
        if (arr[i] == 0) {
            Count++;
        }
    }

    printf("Number of zeros is: %d\n", Count);

    return 0;
}

