/*5. Write a C program to calculate the following
i.sum=1-x2/2! +x4/4!-x6/6!+x8/8!-x10/10!+……….,*/
#include <stdio.h>
#include <math.h>
 
int main()
{
    int n,f_coun;
    float sum=0,x,power,fact;
 
    printf("\tEQUATION SERIES : 1- X^2/2! + X^4/4! - X^6/6! + X^8/8! - X^10/10!");
 
    printf("\n\tENTER VALUE OF X : ");
    scanf("%f",&x);
 
    for(n=0, power=0; power<=10; n++,power=power+2)
    {
        fact=1;
        //Factorial of POWER value.
        for(f_coun=power; f_coun>=1; f_coun--)
            fact *= f_coun;
        //The main equation for sum of series is...
        sum=sum+(pow(-1,n)*(pow(x,power)/fact));
    }
 
    printf("\tSUM : %f",sum);
 return 0;
}
 