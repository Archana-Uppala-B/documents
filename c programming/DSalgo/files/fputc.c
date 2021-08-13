# include <stdio.h>
# include <conio.h>
# include <string.h>
int main()
{
    FILE *Fpointer;
    char data[25]="archana coder isverywell";
    int length=strlen(data);
    int i;
    Fpointer=fopen("text.txt","a");
    if(Fpointer==NULL)
    {
        printf("unable to open or create file");
    }
    else
    {
        for(i=0;i<length;i++)
        {
            printf("writing the character %c\n",data[i]);
            fputc(data[i],Fpointer);
        }
        
        fclose(Fpointer);
    }
    return 0;

}