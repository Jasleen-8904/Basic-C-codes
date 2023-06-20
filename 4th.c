//tell if the user input is a character or integer.

#include<stdio.h>
int main()
{
	char c;
	
	printf("Enter any char or int: ");
	scanf("%c",&c);
	
	if(c>='a' && c<='z')
	{
		printf("Character");
	}
	
	else if(c>='1' && c<='9')
	{
		printf("Numberic");
	}
	
	else if(c=='0')
	{
		printf("Zero");
	}
	return 0;
}
