//find the sum of all elements, biggest element and smallest element of an array.

#include<stdio.h>
int main()
{
    int n,i,a[10],sum=0,big,small;

    printf("Enter the number of elements (max 10): ");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        printf("\nEnter %d element: ",i);
        scanf("%d",&a[i]);
    }

    big=a[0];
    small=a[0];

    for (i=0;i<n;i++)
    {
        sum+=a[i];
        if(a[i]>big)
        {
            big=a[i];
        }
        if(a[i]<small)
        {
            small=a[i];
        }
    }

    printf("Sum = %d",sum);
    printf("\nBiggest Element is : %d\n",big);
    printf("Smallest Eelement is : %d",small);
    return 0;
}