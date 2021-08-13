/*Write a C program to maintain a record of “n” student details using
an array of structures with four fields (Roll number, Name, Marks,
and Grade). Assume appropriate data type for each field. Print the
marks of the student, given the student name as input.*/
#include <stdio.h>
struct student {
    char name[50];
    int roll;
    float marks;
    char grade;
} ;

int main() 
{   struct student s[3];
    int i;
   
  for(i=0;i<3;i++)
  {
    printf("Enter information:\n");
    printf("Enter name: ");
    scanf("%s",&s[i].name);
    printf("Enter roll number: ");
    scanf("%d", &s[i].roll);
    printf("Enter marks: ");
    scanf("%f", &s[i].marks);
    printf("Enter grade: ");
    scanf("%s", &s[i].grade);
  }
for(i=0;i<3;i++)
{
    printf("Displaying Information:\n");
    printf("Name: ");
    printf("%s\n", s[i].name);
    printf("Roll number: %d\n", s[i].roll);
    printf("Marks: %.1f\n", s[i].marks);
    printf("Grade:%c\n", s[i].grade);
}
 return 0;
}