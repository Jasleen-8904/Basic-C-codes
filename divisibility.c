//print the numbers from 1-500 whichare divisible by both 5 and 7.

#include<stdio.h>
int main()
{
    int i=1;
    while(i<=500)
    {
        i++;
        if(i%5!=0 || i%7!=0)
        continue;
        printf("%d\n",i);
    }
    return 0;
}