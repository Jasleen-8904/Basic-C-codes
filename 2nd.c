//calculate the number of years,months,days from the given number of days enetered by the user.

#include<stdio.h>
int main()
{
	int days,Y,M,D;
	printf("Enter the number of days: ");
	scanf("%d",&days);
	
	Y=days/365;
	M=(days%365)/30;
	D=(days%365)%30;
	
	printf("%d,%d,%d",Y,M,D);
}
