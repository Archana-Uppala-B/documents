 /*Write a C program that creates an Employee text file? Records Are
empid, empname, designation, qualification, salary, experience,
Research work, address, city phone?*/
#include <stdio.h>

/*structure declaration*/
struct employee{
    char    name[30];
    int     empId;
    float   salary;

};
 
int main()
{    int i;
    struct employee emp[3];
    FILE *fp;
    fp=fopen("emp.txt","w+");
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
}
 return 0;
}