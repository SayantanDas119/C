#include<stdio.h>>

int main() {
    int arr[] = {3, 7, 2, 5, 7, 8, 3, 1, 2, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    int duplicates = countDuplicates(arr, size);

    printf("Total number of duplicate elements: %d\n", duplicates);

    return 0;
}
int countDuplicates(int arr[], int size) {
    int count = 0;
    int i,j,size;
   int arr[j]

    // Iterate through the array elements
    for (i = 0; i < size; i++) {
        int current = arr[i];
        int duplicateCount = 0;

        // Check for duplicates from the current element onwards
        for (int j = i + 1; j < size; j++) {
            if (arr[j] == current) {
                duplicateCount++;
            }
        }

        // If duplicates were found, increment the total count
        if (duplicateCount > 0) {
            count++;
        }
    }

    return count;
}
