# include <stdio.h>
int main()
{
    int i,j,data,a[50],size ,temp;
    printf("enter the size of array");
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
    
    printf("elements in array are:\n");
     for(i=0;i<size;i++)
     {
         printf("%d\t",a[i]);
     }
    for(i=1;i<size;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    printf("\nthe sorted array by insertion sort is:\n");
     for(i=0;i<size;i++)
     {
         printf("%d\t",a[i]);  
     }
    }
    return 0;
}
