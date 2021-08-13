# include <stdio.h>
struct student
{
    char name[20];
    int id;
    float cgpa;
    char address[30];
};
void main()
{
    struct student std;
    printf("enter student data");
    scanf("%s",std.name);
    scanf("%d",&std.id);
    scanf("%f",&std.cgpa);
    scanf("%s",std.address);
    printf("%s\n %d\n %f\n %s\n",std.name,std.id,std.cgpa,std.address);
}