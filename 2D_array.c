//adding two 2D arrays

#include<stdio.h>
int main()
{
    int a[5][5],b[5][5],c[5][5],m,n,i,j;

    printf("Enter the order of the matrces: ");
    scanf("%d %d",&m,&n);

    printf("Enter the elements of the first matrix: ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter the elements of the second matrix: ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }

    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            printf("\t%d",c[i][j]);
        }
    }
    return 0;
}