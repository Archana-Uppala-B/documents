# include <stdio.h>
struct student
{
  char name[20];
  int id;
  float cgpa;
  char address;
};
void main()
{    int i;
    struct student std[3];
    printf("enter student data");
    for( i=0;i<3;i++)
    {
       scanf("%s",&std[i].name);
       scanf("%d",&std[i].id);
       scanf("%f",&std[i].cgpa);
       scanf("%s",&std[i].address);
    }
    for( i=1;i<=3;i++)
    {
       printf("%s\n %d\n %f\n %s\n",std[i].name,std[i].id,std[i].cgpa,std[i].address);
    }
    
}