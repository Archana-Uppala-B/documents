# include <stdio.h>
int main()
{
    int a[10];
    int size,i;
    printf("enter size of array:");
    scanf("%d",&size);
    printf("enter elements of array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
     printf("elements in array are:");
     for(i=0;i<5;i++)
     {
         printf("%d",a[i]);
     }

}

