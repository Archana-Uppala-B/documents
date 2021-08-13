# include <stdio.h>
# include <conio.h>
int main()
{
    FILE *pf;
    char name[25];
    int age;
    printf("Enter your name and age:");
    scanf("%s %d",&name,&age);
    pf=fopen("name.txt","a");
    if(pf=NULL)
    {
        printf("Unable to open the file\n");
    }
    else
    {
        fprintf(pf,"%s\t%d",name,age);
         printf("data entered successfully ");
         fclose(pf);
    }

}