//find the fibonacci series till nth place

#include<stdio.h>
int main()
{
    int n,a=0,b=1,c,i;

    printf("Enter n: ");
    scanf("%d",&n);

    printf("%d %d ",a,b);

    for(i=2;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;

        printf("%d ",c);
    }
    return 0;
}