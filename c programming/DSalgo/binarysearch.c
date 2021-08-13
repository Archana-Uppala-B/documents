# include <stdio.h>
int Binarysearch(int a[],int size,int element);
int main()
{
    int i,data,a[50],size,result;
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
    }
    printf("enter the element you want to search in the array:");
    scanf("%d",&data);
    Binarysearch(a,size,data);
     printf("%d is found at Index %d \n",data,Binarysearch(a,size,data));

    return 0;
}
int Binarysearch(int a[],int size, int data)
    {
        int l=0,r=size-1;
        int mid;
        while(l<r)
        {
            mid=(l+r)/2;
            if(data==a[mid])
            return mid;
            else if (data<a[mid]) 
            r=mid-1;
            else
            l=mid+1;
        }
        return -1;
    }
    
