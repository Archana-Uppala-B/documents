# include <stdio.h>
# include <conio.h>
int main()
{
       FILE *Fpointer;
       Fpointer=fopen("text.txt","w");
       if(Fpointer==NULL)
         printf("Unable to create the file");
       else
        { printf("file opened seccessfully");
          fclose(Fpointer);
        }

        getch();
        return 0;
}
