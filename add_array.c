//add the first and last element of an array

#include<stdio.h>
int main()
{
    int n,i,a[10],sum=0;

    printf("Enter the number of elements (max 10): ");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        printf("\nEnter %d element: ",i);
        scanf("%d",&a[i]);
    }

    sum=a[0]+a[n-1];
    printf("sum= %d",sum);
    return 0;
}