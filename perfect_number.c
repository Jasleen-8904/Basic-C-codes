//check if the the enetered numbr is a perfect number or not

#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter any positive integer: ");
    scanf("%d",&n);

    for (i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(sum==n)
    printf("Perfect Number");
    
    else
    printf("Not a Perfect Number");

    return 0;
}