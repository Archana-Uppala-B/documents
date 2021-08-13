# include <stdio.h>
int partition(int [],int ,int);
int quicksort(int[],int, int);
int  partition(int a[25],int lb,int ub)
{   int pivot,start,end,temp;
     pivot=a[lb];
     start=lb;
     end=ub;
     while(start<end)
     {
         while(a[start]<=pivot)
         start++;
         while(a[end]>pivot)
         end--;
         if(start<end)
         {
             temp=a[start];
             a[start]=a[end];
             a[end]=temp;
         }

     }
     temp=a[lb];
     a[lb]=a[end];
     a[end]=temp;
     return end;
}
int quicksort(int a[25],int lb,int ub)
{    int loc ,count;
    if(lb<ub)
    {
        loc=partition(a,lb,ub);
        quicksort(a,lb,loc-1);
        quicksort(a,loc+1,ub);
    }
}
int main()
{
    int i,count,a[25];
    printf("how many numbers do you want to enter:");
    scanf("%d",&count);
    printf("enter %d elements:\n",count);
    for(i=0;i<count;i++)
    {
        scanf("%d",&a[i]);
    }

    quicksort(a,0,count-1);

    printf("order of sorted elements:\n");
    for(i=0;i<count;i++)
      printf("%d\t",a[i]);
    return 0;
}