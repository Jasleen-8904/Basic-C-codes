//check whether the number enetered by user is armstrong or not without using pow.

#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,t,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        r=n%10;
        sum+=r*r*r;
        n/=10;
    }
    if(sum==t)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not Armstrong");
    }
    return 0;
}