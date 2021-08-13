//iii) Swapping the values of two variable
#include <stdio.h>
void swap(int,int);
int main()
{
    int a,b;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    swap(a,b);
    return 0;
}
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("a=%d  b=%d\n",a,b);
}