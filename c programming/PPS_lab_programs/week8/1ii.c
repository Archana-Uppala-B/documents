//ii) Find value of a given Fibonacci term
#include<stdio.h>
int fibo(int);
int main()
{
int n,fibonacci;
printf("Enter any number:");
scanf("%d",&n);
fibo(n);
return 0;
}

int fibo(int n)
{  int a=0,b=1,c,i;
printf("the %d fibonacci series are:",n);
  for(i=1;i<=n;i++)
  {
    printf("%d ",a);
    c=a+b;
    a=b;
    b=c;
   }
  ;
}