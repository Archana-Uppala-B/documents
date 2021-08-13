#include <stdio.h>
#include <string.h>

//Declaration of function substring to insert substring into main string
void substring(char str[100],char substr[30],int i);

//Main function to execute program
void main()
{
char str[100],substr[30];
int i,pos;
printf("\nEnter the main string:");
gets(str);
printf("\nEnter the sub string:");
gets(substr);
printf("\nEnter the position where you want to insert sub string:");
scanf("%d",&pos);
i=pos-1;

//Call to substring() function to perform required task
substring(str,substr,i);
}

//Definition of substring() function
void substring(char str[100],char substr[30],int i)
{
char temp[100];
int m,n,k,j;

//strlen(str) function to measure length of the string
m=strlen(str);
n=strlen(substr);

//str is copied into temp from 0 to i
for(j=0;j<i;j++)
{
temp[j]=str[j];
}

//substr is copied into temp from i to n
for(j=i,k=0;j<n+i,k<n;j++,k++)
temp[j]=substr[k];

//remaining str is copied into temp from n+i to m
for(j=n+i,k=i;j<m,k<m;j++,k++)
   temp[j]=str[k];
temp[m+n]='\0';

//puts() function to print temp
puts(temp);
}