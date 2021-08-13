# include <stdio.h>
int main()
{
    int a[40],i,mid,low,high,n,data;
    printf("enter how many elements you want in array");
    scanf("%d",&n);
    printf("Enter elements in array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element you want to search\n");
    scanf("%d",&data);
    low=0;
    high=n-1;
    mid=(low+high)/2;
    while(low<=high)
    {
        if(a[mid]<data)
        low=mid+1;
        else if(a[mid]==data)
        {
            printf("%d element is found at location %d\n",data,mid+1);
             break;
        }
        else
           high=mid-1;
        mid=(low+high)/2;
     }
     if(low>high)
        printf("%d element is not found in array\n",data);
   return 0;
}