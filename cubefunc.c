#include<stdio.h>
void cube(int);
void cube(int a)
{
	printf("%d",a*a*a);
}
main()
{
	int n;
	scanf("%d",&n);
	cube(n);
}
