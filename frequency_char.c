//wap to find the frequency of the character entered by user in the given string.

#include<stdio.h>
#include<string.h>
int main()
{
	char n[100],t[100],ch;
	int c,i,l;
	printf("Enter any string: ");
	gets(n);
	strcpy(t,n);
	strlwr(n);
	l=strlen(n);
	
	printf("\nEnter the character you want to find the frequency of: ");
	scanf("%c",&ch);
	
	for(i=0;i<=l;i++)
	{
		if(n[i]==ch)
		{
			c++;
		}
	}
	
	printf("\nThe frequency of %c in the string %s is: %d",ch,t,c);
	return 0;
}
