/*calculate electricity bill for the following info where a constant amount of 250 will always be added
0-100 --> no extra charges
101-300 --> 5.5
above 300 -- 6*/

#include<stdio.h>
int main()
{
	float units,c,fr=250;
	
	printf("Enter the number of units: ");
	scanf("%f",&units);
	
	if(units>=0 && units<=100)
	{
		c=units*0+fr;
	}
	
	else if(units>=101 && units<=300)
	{
		c=units*5.5+fr;
	}
	
	else if(units>=301)
	{
		c=units*6+fr;
	}
	
	printf("The rate for enetered units is: %f",c);
	return 0;
}
