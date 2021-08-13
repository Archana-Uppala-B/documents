//Tutorial 3: Branching and logical expressions:
//Lab 3: Problems involving if-then-else structures


//1. Write a C program to find the maximum from given three nos.
# include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three integers: \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
       printf("%d is maximun from given three numbers",a);
    else if(b>a && b>c)
       printf("%d is maximun from given three numbers",b);
    else
       printf("%d is maximun from given three numbers",c);

   return 0;
}