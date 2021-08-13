//iv)transpose
#include <stdio.h>
#include <conio.h>
void main()
{
    int a[10][10],tr[10][10],r,c,i,j;
    printf("Enter the number of rows:");
    scanf("%d",&r);
    printf("Enter the number of columns: ");
    scanf("%d",&c);
    printf("Enter the elements of the a matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }
    printf("the matrix you have entered is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            tr[j][i]=a[i][j];
        }
    }
    printf("the Transpose of the matrix is:\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d ",tr[i][j]);
        }
        printf("\n");
    }
}