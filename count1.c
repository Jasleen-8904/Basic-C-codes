#include<stdio.h>
main()
{
	int a,d,count=0,n;
	scanf("%d",&a);
	n=a;
	while(a>0)
	{
	d=a%10;
	count=count+1;
	a=a/10;	
	}
	printf("number of digits is/are %d",count);
}
