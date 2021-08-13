/*Write a C program to read in two integers and display one as a
percentage of the other. Typically your output should look like
20 is 50.00% of 40 assuming that the input numbers where 20 and
40. Display the percentage correct to 2 decimal places.*/
# include <stdio.h>
int main()
{
    float a,b;
    float percent;
    printf("Enter two integers:\n");
    scanf("%f %f",&a,&b);
    percent=a/b*100;
    printf("%.0f is %.2f percent of %.0f",a,percent,b);
  return 0;
}