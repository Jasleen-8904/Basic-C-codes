#include<stdio.h>
#define PI 3.14159
main(void)
{ 
 double radius;
 printf("Enter radius:");
 scanf("%lf", &radius);
 printf("Area is : %lf \n\n", (PI*radius*radius));
}
