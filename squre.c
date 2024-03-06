#include <stdio.h>

 square( num)
{
    return (num * num);
}
int main()
{
    int num;
    float  n;
	printf("\n\n find square of any number :\n");
    
    printf("\n Input any number for square : \n");
    scanf("%d", &num);
    n = square(num);
    printf("The square of %d is : %.2f\n", num, n); 
    return 0;
}
