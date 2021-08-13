# include <stdio.h>
int main()
{
    int a[10];
    int size,i,num,pos;
    printf("enter size of array:");
    scanf("%d",&size);
    if(size>10)
     {
          printf("overflow condition");
     }
    else
    {
     printf("enter elements of array:");
     for(i=0;i<5;i++)
     {
        scanf("%d",&a[i]);
     }
         printf("enter data you want to insert");
         scanf("%d",&num);
         printf("enter the position you want to enter:");
          scanf("%d",&pos);
      if(pos<=0||pos>size+1)
       {
        printf("invalid position");
       }
      else
       {
          for(i=size-1;i>=pos-1;i--)
         {
            a[i+1]=a[i];
         }
        a[pos-1]=num;
        size++;
        }
        printf("the updated array is:");
        for(i=0;i<size;i++)
         {
          printf("%d",a[i]);
         }
        
    
    }
    return 0;
}