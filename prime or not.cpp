// C program to find the prime numbers
// between a given interval

#include <stdio.h>

int main()
{

	int a,c, b, i, j, flag;


	printf("Enter lower bound of the interval: ");
	scanf("%d", &a); 


	printf("\nEnter upper bound of the interval: ");
	scanf("%d", &b); 
	
	
	printf("\nPrime numbers between %d and %d are: ", a, b);
	
	c=fun(int c);
		return 0;
	}
	
	fun(){
	int a,c, b, i, j, flag;
	for (i = a; i <= b; i++) {
		
		if (i == 1 || i == 0)
			continue;	

		for (j = 2; j <= i / 2; ++j) {
			if (i % j == 0) {
				flag = 0;
				break;
			}
		}

		if (flag == 1)
			printf("%d ", i);
	}
return c;

}

