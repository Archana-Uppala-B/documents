/*3. Write a program which reads two integer values. If the first is
lesser print the message “up”. If the second is lesser, print the
message “down” if they are equal, print the message “equal” if
there is an error reading the data, print a message containing the
word “Error”.*/
# include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two integer values:\n");
    scanf("%d%d",&a,&b);
    if(a>='a'&& a<='z')
      printf("error");
    else if(a>='A'&& a<='Z')
      printf("error");
    else if(a<b)
      printf("up");
    else if(b<a)
      printf("down");
    else
      printf("equal");

 
  

}