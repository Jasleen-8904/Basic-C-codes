//to print the table of a given number

#include<stdio.h>
int main()
{
    int n,i,r,p;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Enter the end value of the range required:  ");
    scanf("%d",&r);

    for(i=1;i<=r;i++)
    {
        p=n*i;
        printf("\n%d * %d = %d",n,i,p);
    }
    return 0;
}