//Tutorial 5: 1D Arrays: searching, sorting:
//Lab 5: 1D Array manipulation
/*1. C program that reads N integer numbers and arrange them in
ascending order using Bubble Sort*/
# include <stdio.h>
int main()
{
    int i,j,a[50],n,temp;
    printf("enter the size of array");
    scanf("%d",&n);
    if(n>50)
    {
        printf("overflow condition");
    }
    else
    {
    printf("enter elements of array:\n"); 
      for(i=0;i<n;i++)
      {
          scanf("%d",&a[i]);
      }
    
     for(i=0;i<n-1;i++) 
     {
         for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
             }
        }
     }
     printf("The sorted array by the bubble sort is:\n");
     for(i=0;i<n;i++)
     {
         printf("%d\t",a[i]);
     }
    }
  return 0;
}   
