//to calaculate fare of the bus according to age and the distance travelled.

#include<stdio.h>
int main()
{
    int age,f,ch;
    float d;
    printf("Enter your age: ");
    scanf("%d",&age);

    printf("Enter the distance travelled (in kms): ");
    scanf("%f",&d);

    if(age<10)
    {
        ch=1;
    }

    else if(age>=10 && age<=60)
    {
        ch=2;
    }

    else if(age>60);
    {
        ch=3;
    }

    switch(ch)
    {
        case 1:
        if(d<10)
        {
            f=d*5;
        }
        else if(d>=10 && d<=50)
        {
            f=d*20;
        }
        else if(d>50)
        {
            f=d*50;
        }
        break;

        case 2:
        if(d<10)
        {
            f=d*10;
        }
        else if(d>=10 && d<=50)
        {
            f=d*40;
        }
        else if(d>50)
        {
            f=d*800;
        }
        break;

        case 3:
        if(d<10)
        {
            f=d*4;
        }
        else if(d>=10 && d<=50)
        {
            f=d*15;
        }
        else if(d>50)
        {
            f=d*35;
        }
        break;
    }
    printf("The total fare is: %d",f);

    return 0;
}