//iii)multiplication
#include <stdio.h>
#include <conio.h>
void main()
{
    int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;
    printf("Enter the number of rows:");
    scanf("%d",&r);
    printf("Enter the number of columns: ");
    scanf("%d",&c);
    printf("Enter the elements of tne first matrix");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }
        printf("Enter the elements of tne second matrix");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&b[i][j]);
    }
    printf("Multiplication matrix is :\n");
    for(i=0;i<r;i++)    
     {
         for(j=0;j<c;j++)    
          {    
             mul[i][j]=0;    
             for(k=0;k<c;k++)    
              {    
                 mul[i][j]=mul[i][j]+a[i][k]*b[k][j];    
              }    
          }    
     }    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d  ",mul[i][j]);
        printf("\n");
    }


}