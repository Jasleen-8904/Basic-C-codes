//wap to find the frequency of every character in the given string.

#include<stdio.h>
#include<string.h>
int main()
{
	char n[100],ch;
	int count,i,l;
	printf("Enter any string: ");
	gets(n);
	strlwr(n);
	l=strlen(n);
		
	for(ch='a';ch<='z';ch++)
	{
		count=0;
		for(i=0;i<=l;i++)
		{
			if(n[i]==ch)
			{
				count++;
			}
		}
		if(count!=0)
		{
			printf("%c --> %d\n",ch,count);
		}
	}
	return 0;
}
