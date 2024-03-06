#include<stdio.h>  
int main()    
{    
  long int i,fact=1,number;    
 printf("Enter a number: ");    
  scanf("%ld",&number);    
    for(i=1;i<=number;i++)
	{    
      fact=fact*i;    
  }    
  printf("Factorial of %ld is: %ld",number,fact);    
return 0;  
}   
