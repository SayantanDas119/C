#include <stdio.h>

int main() {
    int n,i;
    int arr[n];
     int evenArr[n], oddArr[n];
    int evenCount = 0, oddCount = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenArr[evenCount] = arr[i];
            evenCount++;
        } else {
            oddArr[oddCount] = arr[i];
            oddCount++;
        }
    }

    printf("\nEven numbers: ");
    for (i = 0; i < evenCount; i++) {
        printf("%d ", evenArr[i]);
    }

    printf("\nOdd numbers: ");
    for (i = 0; i < oddCount; i++) {
        printf("%d ", oddArr[i]);
    }

    return 0;
}

