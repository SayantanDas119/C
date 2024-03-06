#include <stdio.h>
int main()
{ 
int sum=0,i,n,a=1,c=1,f;
printf("Enter a number");
scanf("%d",&n);
{
while(c<=n)
f=1;
c=1;
{
while(i<=a)
f=f*a;
i++;
}
sum=sum+f;
a=a+1;
c++;
}
printf("factorial number=%d",sum);
return (0);
}
