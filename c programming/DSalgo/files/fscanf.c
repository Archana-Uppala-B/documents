#include <stdio.h>
int main()
{
    FILE *pf;
    int age;
    char name[10];
    pf=fopen("archana.txt","r");
    if(pf==NULL)
    {
        printf("Cannot open the file");
    }
    else
    {
        fscanf(pf,"%s\t%d",name,&age);
        printf("%s\t%d",name,age);
    }
}