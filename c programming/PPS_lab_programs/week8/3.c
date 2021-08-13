/*To delete n Characters from a given position in a given
string.*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
 void delchar(char *string,int n, int pos);
 
int main()
{
     char string[20];
     int n,pos;
 
     puts("Enter a string :");
     gets(string);
     printf("Enter the position from where you want to delete:");
     scanf("%d",&pos);
     printf("Enter the number of characters to be deleted :");
     scanf("%d",&n);
     delchar(string, n,pos);
}
 
// Function to delete n characters
void delchar(char *string,int n, int pos)
{
  if ((n+pos-1) <= strlen(string))
  {
    strcpy(&string[pos-1],&string[n+pos-1]);
    puts(string);
    }
}