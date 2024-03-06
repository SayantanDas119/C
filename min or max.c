#include <stdio.h>
int main()
{
	int a[]={455,205,480},i,n=3,s,b;
	s=b=a[i];
	for(i=0;i<n;i++){
		if(s>a[i])
		s=a[i];
			if(b<a[i])
			b=a[i];
	}
	printf("min=%d",s);
	printf("max=%d",b);
return 0;
}
