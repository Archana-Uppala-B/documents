/*Write a C program that manipulates the above text file. The
program must implements the operation to modify a record, delete
a record and append new records*/
#include <stdio.h>

/*structure declaration*/
struct employee{
    char    name[30];
    int     empId;
    float   salary;

};

 
int main()
{    int i,num;
    struct employee emp[3];

     FILE *fp;

  

    printf("Enter 1 to modify the records\n");
    printf("Enter 2 to delete the existing records\n");
    printf("Enter 3 to append the new records\n");

    scanf("%d",&num);

    switch(num)
    {
        case 1:
    fp=fopen("emp.txt","r+");
    if(fp==NULL)
    {
        puts("cannot open the file");
    }
    else
{
   for(i=0;i<3;i++)
   {
    /*read employee details*/
    printf("\nEnter details :\n");
    printf("Name ?:");          scanf("%s",emp[i].name);
    printf("ID ?:");            scanf("%d",&emp[i].empId);
    printf("Salary ?:");        scanf("%f",&emp[i].salary);
   }
  for(i=0;i<3;i++)
   {   
    /*print employee details*/
    fprintf(fp,"\nEntered detail is:");
    fprintf(fp,"Name: %s\n"   ,emp[i].name);
    fprintf(fp,"Id: %d\n"     ,emp[i].empId);
    fprintf(fp,"Salary: %f\n"  , emp[i].salary);
   
   }
   printf("data entered successfully");
  fclose(fp);
  break;


    
}
     case 2:
        fp=fopen("emp.txt","w");
    if(fp==NULL)
    {
        puts("cannot open the file");
    }
    else
{
   for(i=0;i<3;i++)
   {
    /*read employee details*/
    printf("\nEnter details :\n");
    printf("Name ?:");          scanf("%s",emp[i].name);
    printf("ID ?:");            scanf("%d",&emp[i].empId);
    printf("Salary ?:");        scanf("%f",&emp[i].salary);
   }
  for(i=0;i<3;i++)
   {   
    /*print employee details*/
    fprintf(fp,"\nEntered detail is:");
    fprintf(fp,"Name: %s\n"   ,emp[i].name);
    fprintf(fp,"Id: %d\n"     ,emp[i].empId);
    fprintf(fp,"Salary: %f\n"  , emp[i].salary);
   
   }
   printf("data entered successfully");
  fclose(fp);
  break;


    
}
  case 3:
     fp=fopen("emp.txt","a");
    if(fp==NULL)
    {
        puts("cannot open the file");
    }
    else
{
   for(i=0;i<3;i++)
   {
    /*read employee details*/
    printf("\nEnter details :\n");
    printf("Name ?:");          scanf("%s",emp[i].name);
    printf("ID ?:");            scanf("%d",&emp[i].empId);
    printf("Salary ?:");        scanf("%f",&emp[i].salary);
   }
  for(i=0;i<3;i++)
   {   
    /*print employee details*/
    fprintf(fp,"\nEntered detail is:");
    fprintf(fp,"Name: %s\n"   ,emp[i].name);
    fprintf(fp,"Id: %d\n"     ,emp[i].empId);
    fprintf(fp,"Salary: %f\n"  , emp[i].salary);
   
   }
   printf("data entered successfully");
  fclose(fp);
  break;
}

}

  
 return 0;
}