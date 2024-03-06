#include<stdio.h>
int main()
{
	int n,sum=0,r;
	printf("enter number");
	scanf("%d,sum");
	{
	while(n>0)
	r=n%10;
	sum=sum+r;
	n=n/10;
	}
	printf("sum=%d",sum);
	return(0);
}
