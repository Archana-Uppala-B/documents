//Tutorial 6: 2D arrays and Strings
//Lab 6: Matrix problems, String operations
//1. Write a C program to perform the basic Matrix operations
//i) Addition 

#include <stdio.h>
#include <conio.h>
void main()
{
	int a[2][3],b[2][3],c[2][3],i,j;
	
	printf("\nENTER VALUES FOR MATRIX A:\n");
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	printf("\nENTER VALUES FOR MATRIX B:\n");
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
			scanf("%d",&b[i][j]);
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
			c[i][j]=a[i][j]+b[i][j];
	printf("\nTHE VALUES OF MATRIX C ARE:\n");
	for(i=0;i<2;i++)
        {
		for(j=0;j<3;j++)
			printf("%5d",c[i][j]);
		printf("\n");
	}
	getch();
}