// sum of diagonal of the array

#include<stdio.h>
int main()
{
    int a[5][5],i,j,m,n,sum=0;

    printf("Enetr the order of the matrix: ");
    scanf("%d %d",&m,&n);

    printf("Enter the elements of the matrix: ");
    for(i=0;i<m;++i)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                sum+=a[i][j];
            }
        }
    }

    printf("Sum of diagonal elements: %d",sum);
    return 0;
}