/*2. Write a C program to find that the accepted no is Negative,
Positive or Zero.*/
# include <stdio.h>
int main()
{
    int x;
    printf("Enter any number: ");
    scanf("%d",&x);
    if(x>0)
     printf("%d is Positive",x);
    else if(x<0)
     printf("%d is Negative",x);
    else
    printf("%d is Zero",x);
  
  return 0;
}