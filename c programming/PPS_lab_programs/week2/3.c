//Write a C program to convert centigrade into Fahrenheit.
//Formula: C= (F-32)/1.8.
# include <stdio.h>
int main()
{
    float c,f;
    printf("Enter the temperture in centigrades: ");
    scanf("%f",&c);
    f=c*1.8+32;
    printf("the temperature in fahrenheit is %f ",f);
}