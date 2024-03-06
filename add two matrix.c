#include<conio.h>
#include<stdio.h>
void main()
{
	int arr1[4][4], arr2[4][4],arr3[4][4],i=0,j=0,t;
	printf("\n enter the element of 1st number:-\n ");
       for(i=0;i<4;i++)
    {
    for(j=0;j<4;j++)
    {
	printf("enter elemrnt[%d][%d]:",i,j);
	scanf("%d",&arr1[i][j]);
}
}
	 printf("\n enter the element of 2nd number:-\n ");	
	 for(i=0;i<4;i++)
    {
    for(j=0;j<4;j++)
	{
	printf("enter elemrnt[%d][%d]:",i,j);
	scanf("%d",&arr2[i][j]);
     }
     }
     printf("1st matrix:-\n");
       for(i=0;i<4;i++)
       {
        for(j=0;j<4;j++)
      printf("%d\t",arr1[i][j]);
      printf("\n");
	    }
	     printf("2nd matrix:-\n");
       for(i=0;i<4;i++)
       {
        for(j=0;j<4;j++)
      printf("%d\t",arr1[i][j]);
      printf("\n");
	    }
	    for(i=0;i<4;i++)
       {
        for(j=0;j<4;j++)
        
        	arr3[i][j]=arr1[i][j]+arr2[i][j];
        	
	}
	
	printf("addition result:\n");
       for(i=0;i<4;i++)
       {
        for(j=0;j<4;j++)
        printf("%d\t",arr3[i][j]);
       printf("\n");
}
}

