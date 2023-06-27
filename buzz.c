//check if the entered number is a buzz number or not

#include<stdio.h>
int main()
{
    int n;
    printf("Enter any integer: ");
    scanf("%d",&n);

    if(n%7==0 || n%10==7)
    printf("Buzz Number");

    else
    printf("Not a Buzz Number");

    return 0;
}