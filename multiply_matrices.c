//multiplication of matrices

#include<stdio.h>
int main()
{
    int a[5][5],b[5][5],c[5][5],i,j,k,m,n,p,q;
    
    printf("Enter the order of the first matrix: ");
    scanf("%d %d",&m,&n);

    printf("Enter the order of the second matrix: ");
    scanf("%d %d",&p,&q);

    if(n==p)
    {
        printf("Enter the elements of the first matrix: ");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

        printf("Enter the elements of the second matrix: ");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
    }

    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < q; j++) 
        {
            c[i][j] = 0;
            for (k = 0; k < n; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }


    for(i=0;i<m;i++)
    {
        printf("\n");
        for(j=0;j<q;j++)
        {
            printf("\t%d",c[i][j]);
        }
    }
    return 0;
}