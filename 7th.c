/*Write a program that takes a character as input and determines if it is an uppercase letter, 
lowercase letter, or a digit. Print "Uppercase" for uppercase letters, "Lowercase" for 
lowercase letters, and "Digit" for digits.*/

#include<stdio.h>
int main()
{
    char ch;

    printf("Enter any character: ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z')
    {
        printf("Lowercase");
    }

    else if(ch>='A' && ch<='Z')
    {
        printf("Uppercase");
    }

    else if(ch>='0' && ch<='9')
    {
        printf("Digit");
    }

    else
    {
        printf("Symbol");
    }
    return 0;
}