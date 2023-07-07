//Binary Search

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,a[10],s,min,max,mid;

    printf("Enter the number of elements (max 10): ");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        printf("\nEnter %d element: ",i);
        scanf("%d",&a[i]);
    }

    min=0;
    max=n-1;

    printf("Enter the element to be searched: ");
    scanf("%d",&s);

    while(min<=max)
    {
        mid= (min+max)/2;

        if(a[mid]==s)
        {
            printf("\n%d",mid);
            exit (0);
        }

        else if(a[mid]<s)
        {
            min=mid+1;
        }

        else
        {
            max=mid-1;
        }
    }
    return 0;
}