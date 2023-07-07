//find the transpose of a matrix

#include<stdio.h>
int main()
{
    int a[5][5],b[5][5],i,j,m,n;

    printf("Enter the order of the matrces: ");
    scanf("%d %d",&m,&n);

    printf("Enter the elements of the matrix: ");
    for(i=0;i<m;i++)
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
            b[i][j]=a[j][i];
        }
    }

    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            printf("\t%d",b[i][j]);
        }
    }
    return 0;
}