# include <stdio.h>
int merge(int[],int,int,int);
int mergesort(int[],int,int);
int mergesort(int a[25],int lb,int ub)
{   int mid;
    if(lb<ub)
    {
        mid=(lb+ub)/2;
        mergesort(a,lb,mid);
        mergesort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}
int merge(int a[25],int lb,int mid,int ub) 
 {  int i,j,k,b[25];
    i=lb;
    j=mid+1;
    k=lb;
    while(i<=mid && j<=ub)
    {
      if(a[i]<=a[j])
      {
          b[k]=a[i];
          i++;
      }
      else
      {
          b[k]=a[j];
          j++;
      }
      k++;
    }
    if(i>mid)
    {
        while(j<=ub)
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    else
    {
        while(i<=mid)
        {
            b[k]=a[i];
            i++;
            k++;
        }
    }
    for(k=lb;k<=ub;k++)
    {
        a[k]=b[k];
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

    mergesort(a,0,count-1);

    printf("order of sorted elements:\n");
    for(i=0;i<count;i++)
      printf("%d\t",a[i]);
    return 0;
}