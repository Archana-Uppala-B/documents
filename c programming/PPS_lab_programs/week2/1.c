//1. Write a C program to find the area of a circle using the formula:
//Area = PI * r2
# include <stdio.h>
# define PI 3.141
int main()
{
    float r,Area;
    
    printf("Enter the radius of the circle:");
    scanf("%f",&r);
    Area=PI*r*r;
    printf("The area of the circle with the %f as radius is %f",r,Area);
    return 0;
}