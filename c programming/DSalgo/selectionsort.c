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
    {                                      //to take input from user
        scanf("%d",&a[i]);
    }
    
    printf("elements in array are:\n");
     for(i=0;i<size;i++)
     {                                       // to output the initial array
         printf("%d\t",a[i]);
     }
     
     for(i=0;i<size-1;i++)
     {
         int min=i;
         for(j=i+1;j<size;j++)
         {
             if(a[j]<a[min])
             min=j;
         }
         if(min!=i)
         {
             temp=a[min];
             a[min]=a[i];
             a[i]=temp;
         }
     }
    
    
    printf("\nthe sorted array by selection sort is:\n");
     for(i=0;i<size;i++)
     {
         printf("%d\t",a[i]);  
     }
    }
    return 0;
}
