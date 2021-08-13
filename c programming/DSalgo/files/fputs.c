# include <stdio.h>
# include <conio.h>
//# include <stdlib.h>
int main()
{
    FILE *pf;
    char input[25];
    pf=fopen("text.txt","a");
    if(pf==NULL)
    {
        printf("cannot open the file");
    }
    else
    {
        printf("enter the string to write to the file");
        gets(input);
        fputs(input,pf);
        printf("data has successfully written to file");
        fclose(pf);
    }

}