//Print the initials of the name entered by the user.

#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    int l,i;

    printf("Enter your name: ");
    gets(s);

    l=strlen(s);
    strupr(s);

    printf("%c.",s[0]);

    for(i=0;i<l;i++)
    {
        if(s[i]==' ')
        {
            printf("%c",s[i+1]);
        }
    }
    return 0;
}