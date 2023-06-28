//  1/(2)^2+2/(4)^2+3/(6)^2....n

#include<stdio.h>
#include<math.h>
int main()
{
    float i,n,j,k,a,sum=0;

    printf("Enter n: ");
    scanf("%f",&n);

    for(i=1;i<=n;i++)
    {
        a=i;
        j=i*2;
        k=pow(j,2);
        a/=k;
        sum+=a;
    }
    printf("Sum = %f",sum);
}