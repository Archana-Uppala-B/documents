# include <stdio.h>
int main()
{
    int a[10];
    int size,i,pos,item;
    printf("enter size of array:");
    scanf("%d",&size);
    if(size>10)
    {
        printf("overfloew condition");
    }
    else
    {
    printf("enter elements of array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("from which position do you want to delete the data: ");
    scanf("%d",&pos);
    if(pos<=0||pos>size)
    {
        printf("invalid position");
    }
    else
    {
        for(i=pos-1;i<size-1;i++)
        {
            a[i]=a[i+1];
        }
    size--;
    item=a[pos-1];
    printf("deleted item is %d\n",item);
     }
    printf("updated array is");
    for(i=0;i<size;i++)
    {
        printf("%d",a[i]);
    }

    
    }
}