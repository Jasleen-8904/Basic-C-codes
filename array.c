//creating an array

#include<stdio.h>
int main()
{
    int n,i,a[10];

    printf("Enter the number of elements (max 10): ");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        printf("\nEnter %d element: ",i);
        scanf("%d",&a[i]);
    }

    for (i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}