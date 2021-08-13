//Write a C program to find the area and volume of sphere.
//Formulas are: Area =4*PI*R*R Volume = 4/3*PI*R*R*R
# include <stdio.h>
# define PI 3.14
int main()
{
    float R;
    printf("Enter the radius of the sphere you want to claculate the area and volume: ");
    scanf("%f",&R);
     float Area=4*PI*R*R;
     float Volume=(4/3)*PI*R*R*R;
    printf("Area of the sphere of radius %f is %f\n",R,Area);
    printf("Volume of the sphere of radius %f is %f\n",R,Volume);
}