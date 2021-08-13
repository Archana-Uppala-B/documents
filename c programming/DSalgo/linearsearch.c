# include <stdio.h>
int main()
{
    int i,data,a[50],size;
    printf("enter the size of array:");
    scanf("%d",&size);
    if(size>50)
    {
        printf("overflow condition");
    }
    else
    {
    printf("enter elements of array:\n"); 
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element you want to search in the array:");
    scanf("%d",&data);
    for(i=0;i<size;i++)
    {
        if(a[i]==data)
        {
            printf("element found at index:%d",i);
            break;
        }
    }
    if(i==size)
    {
        printf("element not found");
    }
    }
    return 0;
}