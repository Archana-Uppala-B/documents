//6. Write a C program to find the roots of a Quadratic equation.
# include <stdio.h>
# include <math.h>
int main()
{
    int a,b,c,d;
    double root1,root2;
    printf("enter the coefficient of x^2:");
    scanf("%d",&a);
    printf("enter the coefficient of x:");
    scanf("%d",&b);
    printf("enter the constant term:");
    scanf("%d",&c);
     d=(b*b)-(4*a*c);
    if(d<0)
    {
      printf("First root=%.21f+i%.21f\n",-b/(double)(2*a),sqrt(-d)/(2*a)); 
       printf("Second root=%.21f-i%.21f\n",-b/(double)(2*a),sqrt(-d)/(2*a)); 
    }

    else if(d>0)
    {
      root1=(-b+sqrt(d))/(2*a);
      root2=(-b-sqrt(d))/(2*a);

      printf("First root=%.21f\n",root1);
      printf("second root=%.21f\n",root2);
    }
    else if(d==0)
    {
      printf("roots are real and equal");
      printf("the roots are:%f %f",(-b)/(2*a),(-b)/(2*a));
    }
    return 0;

}