//check if the entered number is automorphic or not

#include<stdio.h>
int main()
{
    int n,t;
    printf("Enter any positive integer: ");
    scanf("%d",&n);
    t=n;

    if(n*n%10==t || n*n%100==t || n*n%1000==t)
    printf("Automorphic Number");

    else
    printf("Not an Automorphic Number");

    return 0;
}