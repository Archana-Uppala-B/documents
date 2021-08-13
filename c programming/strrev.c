# include <stdio.h>
# include <string.h>
int main()
{
    char str[50];
    int len,i;
    printf("c program to reverse a string\n");
    printf("enter a string:");
    scanf("%s",str);
    len=strlen(str);
    for(i=len-1; i>=0; i--)
    {
        printf("%c",str[i]);
    }
    return 0;
}