/*Write a program that takes a day of the week as input (1-7, where 1 represents Sunday) 
and prints the corresponding day name. For example, if the input is 3, the program should print "Wednesday."*/

#include<stdio.h>
int main()
{
    int ch;
    printf("Enter Day Number: ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
        puts("SUNDAY");
        break;

        case 2:
        puts("MONDAY");
        break;

        case 3:
        puts("TUESDAY");
        break;

        case 4:
        puts("WEDNESDAY");
        break;

        case 5:
        puts("THURSDAY");
        break;

        case 6:
        puts("FRIDAY");
        break;

        case 7:
        puts("SATURDAY");
        break;

        default :
        puts("Inavlid");
    }
}