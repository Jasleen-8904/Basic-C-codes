//check if the input given by user is a palindrome or not

#include<stdio.h>
int main()
{
    int n,r,rev=0,t;
    printf("Enter n: ");
    scanf("%d",&n);
    t=n;

    while(n!=0)
    {
        r=n%10;
        rev=(rev*10)+r;
        n/=10;
    }
    if(rev==t)
    printf("Palindrome");

    else
    printf("Not a Palindrome");

    return 0;
}