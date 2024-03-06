#include<stdio.h>
int main()
{
	char ch;
	float a,b,r;
	printf("\n 	menu");
	printf("\n enter A for addition");
	printf("\n enter M for multiplion");
	printf("\n enter S for subtraction");
	printf("\n enter D for divition");
	printf("\n enter your choice:");
	scanf("%c",&ch);
	printf("enter any first number: ");
	scanf("%f",&a);

printf("enter any secound number: ");
	scanf("%f",&b);
		switch (ch)
	{
		case'A':
		case'a': r=a+b;
				break;
		case'M':
		case'm':r=a*b;
				break;
		case'S':
		case's':r=a-b;
				break;
		case'D':
		case'd':r=a/b;
				break;
	default:printf("invalid choice");
		exit(0);
				
	}
	printf("\n result=%f",r );
	
	return(0);
 } 
