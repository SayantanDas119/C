#include<stdio.h>

int main()
{

    long fact=1;

    int x,n,s_range,e_range; 

    printf("Enter the starting range: ");

    scanf("%d",&s_range); 

    printf("Enter the ending range: ");

    scanf("%d",&e_range); 

    printf("Factorial series of the given range is: ");

    for(n=s_range;n<=e_range;n++){

        fact=1; 

        for(x=1;x<=n;x++){

            fact=fact*x;

        } 

        printf("%ld ",fact);

    }

    return 0;

}
