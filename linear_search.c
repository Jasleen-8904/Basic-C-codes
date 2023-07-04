//searching an element in an array (LINEAR SEARCH)

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,a[10],s,loc=0;

    printf("Enter the number of elements (max 10): ");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        printf("\nEnter %d element: ",i);
        scanf("%d",&a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d",&s);

    for(i=0;i<n;i++)
    {
        if (a[i]==s)
        {
                 break; 
             }}

  if (i<n) 
    printf("element found at %d",i ); 
  else
    printf("element not found");

  return 0;

    }