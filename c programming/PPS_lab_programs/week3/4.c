/*4. Write a C program that prints the given three integers in ascending
order using if – else.*/
# include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three integers:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {   if(b>c)
        printf("three integers in ascending order is %d %d %d",c,b,a);
        else
        printf("three integers in ascending order is %d %d %d",b,c,a);

    }
    else if(b>a && b>c)
    {  if(a>c)
       printf("three integers in ascending order is %d %d %d",c,a,b);
       else
       printf("three integers in ascending order is %d %d %d",a,c,b);
    }
    else if(c>a && c>b)
    {   if(a>b)
       printf("three integers in ascending order is %d %d %d",b,a,c);
       else
       printf("three integers in ascending order is %d %d %d",a,b,c);
    }

}