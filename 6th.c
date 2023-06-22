//wap to convert temperature to celcius or farenheit using switch.

#include<stdio.h>
int main()
{
    float t,t1;
    char ch;

    printf("Enter C to convert temperature to Celcius and F to convert into Farenheit: ");
    scanf("%c",&ch);

    switch(ch)
    {
        case 'C':
        case 'c':
        printf("Enter the temperature in Farenheit: ");
        scanf("%f",&t);
        t1=(t-32)*5/9;
        break;

        case 'F':
        case 'f':
        printf("Enter the temperature in Celcius: ");
        scanf("%f",&t);
        t1=(t*9/5)+32;
        break;

        default:
        printf("Invalid Choice!");
        break;
    }

    printf("The converted temperature is: %f",t1);

    return 0;
}