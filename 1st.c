//code to see the usage of all the datatypes in C.
#include<stdio.h>
int main()
{
    char name[50];
    int age;
    float per;
    char gender;

    printf("Enter your name: ");
    gets(name);

	printf("Enter your gender: ");
    scanf("%c",&gender);
    
	printf("Enter your age: ");
    scanf("%d",&age);

    printf("Enter your percentage: ");
    scanf("%f",&per);
     
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Percentage: %f\n",per);
    printf("Gender: %c",gender);

    return 0;
}
