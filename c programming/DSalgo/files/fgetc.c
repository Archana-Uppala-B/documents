#include <stdio.h>
int main()
{
    FILE *pf;
    char ch;
    pf=fopen("archana.txt","r");
    if(pf==NULL)
    {
        printf("cannot open the file");
    }
    else
    {
        while(!feof(pf))
        {
            ch=fgetc(pf);
            printf("%c",ch);
        }
        fclose(pf);
    }
}