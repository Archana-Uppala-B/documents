#include <stdio.h>
int main()   
{
    int a[100],n,k,b,i,j,temp;
    printf("enter the size of the array:");
    scanf("%d",&n);
    printf("enter the elements of the array:\n");
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    
    for(b=0;b<n-1;b++)
    {
        for(k=0;k<n-b-1;k++) 
        {
            if(a[k]>a[k+1])
              {
                  temp=a[k];
                  a[k]=a[k+1];
                  a[k+1]=a[k];
              }
        }
    }
    printf("the sorted array is:\n");
    for(j=0 ; j<n ; j++)
      {
          printf("%d\t",a[j]);
      }
    return 0;
}