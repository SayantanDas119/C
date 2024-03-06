#include <stdio.h>

int main() {

	int a[] = { 15,10,12 },n=3;
	int b[n], i;


	for (i = 0; i < n; i++) {
		b[i] = a[i];
	}

	printf("The first array is :");
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}

	printf("\nThe second array is :");
	for (i = 0; i < n; i++) {
		printf("%d ", b[i]);
	}
	return 0;
}
