# include <stdio.h>
# include <string.h>
int main()
{
    char str[100],copystr[100];
    int i;
    printf("\n please enter any strinng:");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        copystr[i]=str[i];
    }
    copystr[i]='\0';
    printf("\n Sttring that we copied into copystr=%s",copystr);
    printf("\n Total number of characters that we copied=%d\n",i);
    return 0;
}