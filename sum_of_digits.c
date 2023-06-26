//print the sum of the digits of the number entered.

#include<stdio.h>
int main()
{
    int n,r,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);

    while(n!=0)
    {
        r=n%10;
        sum+=r;
        n/=10;
    }
    printf("Sum = %d",sum);
    return 0;
}